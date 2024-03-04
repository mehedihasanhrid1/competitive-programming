const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.question("Enter your name: ", function(name) {
    rl.question("Enter your date of birth (e.g., January 1, 2000): ", function(dob) {
        rl.question("Enter your mobile number: ", function(mobile) {
            console.log("\nName:", name);
            console.log("Date of Birth:", dob);
            console.log("Mobile Number:", mobile);
            rl.close();
        });
    });
});
