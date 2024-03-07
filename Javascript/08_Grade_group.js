const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.question('Enter your mark: ', (mark) => {
  mark = parseInt(mark);

  if (mark >= 80) {
    console.log("Grade: A+");
  } else if (mark >= 75) {
    console.log("Grade: A");
  } else if (mark >= 70) {
    console.log("Grade: A-");
  } else if (mark >= 65) {
    console.log("Grade: B+");
  } else if (mark >= 60) {
    console.log("Grade: B");
  } else if (mark >= 50) {
    console.log("Grade: C+");
  } else if (mark >= 40) {
    console.log("Grade: D");
  } else {
    console.log("Grade: F");
  }

  rl.close();
});
