const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.question("Enter the start of the range: ", function(startStr) {
    rl.question("Enter the end of the range: ", function(endStr) {
        const start = parseInt(startStr);
        const end = parseInt(endStr);
        let sum_even = 0;
        let sum_odd = 0;

        for (let i = start; i <= end; i++) {
            if (i % 2 === 0) {
                sum_even += i;
            } else {
                sum_odd += i;
            }
        }

        console.log("Sum of even numbers:", sum_even);
        console.log("Sum of odd numbers:", sum_odd);

        rl.close();
    });
});
