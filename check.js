const fs = require('fs');
const path = require('path');

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
    'ft_tolowercase.c',
    'Makefile',
];


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
    { text: 'ERROR! some files are missing', color: red }

];

const printStatus = (index) => {
    if (index < status.length) {
        console.log(`${status[index].color}${bold}${status[index].text}${reset}`);
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
            console.log(`${reset}${bold}`, `File ${file} ${exists ? 'exists' : 'is MISSING'}`);
            err = true;
        }
    }
    return err;
}

printStatus(1);
checkFilesExist(filesToCheck).then((err)=>{
    if (err){
        printStatus(3)
    }
})
