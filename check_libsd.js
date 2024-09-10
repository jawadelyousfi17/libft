const { exec } = require('child_process');
const os = require('os');



const reset = '\x1b[0m';
const bold = '\x1b[1m';
const blue = '\x1b[34m';
const yellow = '\x1b[33m';
const green = '\x1b[32m';
const red = '\x1b[31m'; // Red color

// Function to check if libbsd is installed
function isLibbsdInstalled(callback) {
  const platform = os.platform();
  if (platform == 'win32')
  {
    callback(true);
    return;
  }
  const command = 'ldconfig -p | grep libbsd';

  exec(command, (error, stdout, stderr) => {
    if (error) {
      console.error(`Error executing command: ${stderr}`);
      callback(false);
      return;
    }

    // Check if libbsd is in the output
    if (stdout.includes('libbsd')) {
      callback(true);
    } else {
      callback(false);
    }
  });
}

function printInstallationInstructions() {
    const platform = os.platform();
    switch (platform) {
      case 'linux':
        console.log(reset,'\rIt looks like `libbsd` is not installed. To install `libbsd` on Linux, run:');
        console.log(' $ sudo apt-get install libbsd-dev');  // For Debian-based systems
        console.log(' $ sudo yum install libbsd-devel');  // For Red Hat-based systems
        break;
  
      case 'darwin':
        console.log('It looks like `libbsd` is not installed. To install `libbsd` on macOS, run:');
        console.log('  brew install libbsd');
        break;
  
      default:
        console.log('Your operating system is not supported for automatic instructions. Please consult the documentation for installing `libbsd`.');
        break;
    }
  }

module.exports = {
    isLibbsdInstalled,
    printInstallationInstructions
  };