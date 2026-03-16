const fs = require('fs');

//synchronous read
console.log("Reading file Synchronously..");

const dataSync = fs.readFileSync('sample.txt', 'utf8');

console.log(dataSync);

//asynchronous read
console.log("Reading file Asynchronously..");

fs.readFile('sample.txt', 'utf8', (err, data) => {
    if (err) {
        console.log("Error :", err);
        return;
    }
    console.log(data);
});
console.log("Program Finished");
