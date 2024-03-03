const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.question("Enter a year: ", function(yearStr) {
    const year = parseInt(yearStr);
    const isLeapYear = (year % 400 === 0) || (year % 100 !== 0 && year % 4 === 0);
    if (isLeapYear) {
        console.log("Leap year.");
    } else {
        console.log("Not leap year.");
    }
    rl.close();
});
