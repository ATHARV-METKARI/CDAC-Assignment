function normalFunction()
{
    console.log("1. Normal Function Executed");
}

console.log("2. Program Start");

setTimeout(function(){
    console.log("3. setTimeout Executed");
}, 0);

let p = new Promise(function(resolve, reject){
    resolve("4. Promise Executed");
});

p.then(function(msg){
    console.log(msg);
});

normalFunction();

console.log("5. Program End here ");