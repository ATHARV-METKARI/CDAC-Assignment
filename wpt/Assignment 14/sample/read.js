const fs = require('fs');
let a = fs.readFileSync('sample.txt','utf-8');
console.log(a+  "  Read using synchronously \n ")


const content = "Hello"
let b = fs.writeFileSync('sample.txt',content);
console.log( content +       "written using synchronously \n")


fs.appendFile('sample.txt','',(err)=>{
if (err) console.log(err)
console.log("written using Async \n")
})


fs.readFile('sample.txt','utf-8',(err,data)=>{
if (err) console.log(err)
console.log(data +  "  Read using Async \n")
})


