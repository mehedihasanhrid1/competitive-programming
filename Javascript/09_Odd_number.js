function printOddNumbers(n) {
    for (let i = 1; i <= n; i++) {
        if (i % 2 !== 0) {
            console.log(i);
        }
    }
}

const n = 10;
console.log("Odd numbers from 1 to", n);
printOddNumbers(n);
