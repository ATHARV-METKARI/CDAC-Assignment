const fs = require("fs");

const data1 = "Product ID :101\nProduct Name :Laptop\nPrice :55000";

fs.writeFileSync("Product.txt", data1);
console.log("Data written using Synchronous Method");

const data2 = "Product ID:102\nProduct Name : Mobile\nPrice : 25000";

fs.appendFile("Product.txt", data2, (err) => {
    if (err) {
        console.log("Error writing file");
    }
    else {
        console.log("Data appended using asynchronous method");
    }
});