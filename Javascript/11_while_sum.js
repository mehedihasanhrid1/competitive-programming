function printSum(n) {
    let i = 1;
    while (i <= n) {
        if (i % 2 === 0) {
            console.log(i);
        }
        i++;
    }
}

const n = 50;
console.log("Even numbers from 1 to", n);
printSum(n);
