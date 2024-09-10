const { exec } = require('child_process');
const fs = require('fs');
const path = require('path');
const { exit } = require('process');

// Array of file paths to check
const filesToCheck = [
    'ft_isalnum.c',
    'ft_isascii.c',
    'ft_isprint.c',
    'ft_memcpy.c',
    'ft_memset.c',
    'ft_strlcat.c',
    'ft_strlen.c',
    'ft_strncmp.c',
    'ft_strrchr.c',
    'ft_toupper.c',
    'ft_atoi.c',
    'ft_isalpha.c',
    'ft_isdigit.c',
    'ft_memcmp.c',
    'ft_memmove.c',
    'ft_strchr.c',
    'ft_strlcpy.c',
    'ft_strnstr.c',
    'ft_tolower.c',
    'Makefile',
];

// All tests Functions
const testFunctionsFiles = [
    'test_ft_isalpha.c',
    'test_ft_isdigit.c',
    'test_ft_isalnum.c',
    'test_ft_isascii.c',
    'test_ft_isprint.c',
    'test_ft_strlen.c',
    'test_ft_toupper.c',
    'test_ft_tolower.c',
    'test_ft_strchr.c',
    'test_ft_strrchr.c',
    'test_ft_strncmp.c',
    'test_ft_strlcpy.c',
    'test_ft_strlcat.c',
    'test_ft_strnstr.c',
    'test_ft_atoi.c',
    'test_ft_memset.c',
    'test_ft_memcmp.c',
    'test_ft_memcpy.c',
    'test_ft_memmove.c'
]
const pathToTestsFunction = 'tests/test_functions/'
let allTestsFunctionsCommand = '';
testFunctionsFiles.forEach(testFunction => {
    allTestsFunctionsCommand += `${pathToTestsFunction}${testFunction} `
})

const reset = '\x1b[0m';
const bold = '\x1b[1m';
const blue = '\x1b[34m';
const yellow = '\x1b[33m';
const green = '\x1b[32m';
const red = '\x1b[31m'; // Red color

const status = [
    { text: '🔍 Checking files...', color: blue },
    { text: '⚙️ Processing...', color: green },
    { text: '✅ Complete!', color: green },
    { text: 'ERROR! some files are missing', color: red },
    { text: '✅ All files found', color: green },

];

const printStatus = (index) => {
    if (index < status.length) {
        console.log(`${status[index].color}${bold}${status[index].text}${reset}\n`);
    }
};


function checkFileExists(filePath) {
    return new Promise((resolve) => {
        fs.access(filePath, fs.constants.F_OK, (err) => {
            resolve(!err);
        });
    });
}

async function checkFilesExist(files) {
    let err = false;
    for (const file of files) {
        const absolutePath = path.resolve(file); // Resolve absolute path
        const exists = await checkFileExists(absolutePath);
        if (!exists) {
            console.error(`${file} ${exists ? 'exists' : 'is MISSING'}`);
            err = true;
        }
    }
    return err;
}

console.log(blue, bold,"\r🔍  Checking files ...")

checkFilesExist(filesToCheck).then((err) => {
    if (err) {
        console.log(red, bold, '\rERROR! some files are missing');
        console.log(red, bold, '\rStopping the application...\n');
        process.exit(0); // 0 indicates success
    }
    console.log(green,bold,"\r✅ All files exist");
    exec('make', (error, stdout, stderr) => {
        //console.log("\r")
        console.log(blue, bold,"\r⚙️  Executing make ...")
        if (error) {
            console.error(`Error: \n ${error.message}`);
            return;
        }
        if (stderr) {
            console.log(bold, `stderr: ${stderr}`);
            return;
        }
        if (stdout)
        {}
        console.log(green, bold, "\r✅ sucess!");
        exec('make clean', (error, stdout, stderr) => {
         })
        console.log(blue, bold,"\r⚙️  Cleaning...");
        console.log(blue, bold,"\r⚙️  Compiling...");
        exec('gcc -Wall -Wextra -Werror tests/main.c ' + allTestsFunctionsCommand + 'libft.a -lbsd -fsanitize=address', (error, stdout, stderr) => {
            if (error) {
                console.error(bold, `\rError: \n${error.message}`);
                return;
            }
            if (stderr) {
                console.log(bold, `stderr: ${stderr}`);
                return;
            }
            if (stdout)
                console.log(`${stdout}`);
            console.log(green,"\r✅ Compiled!");
            console.log(blue,"\r⚙️  Running...");
            exec('./a.out -f', (error, stdout, stderr) => {
                if (error) {
                    console.error(`Error: ${error.message}`);
                    return;
                }
                if (stderr) {
                    console.error(`stderr: ${stderr}`);
                    return;
                }
                if (stdout)
                    console.log(`${stdout}`);
            });
        });
    });


})
