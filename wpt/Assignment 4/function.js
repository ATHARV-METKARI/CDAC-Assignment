function add(...a)
{
    console.log("converts all passed arguments into an array");

    let sum = 0;

    for(let i=0;i<a.length;i++)
    {
        sum += a[i];
    }

    return sum;
}

add();

var s = add(10,3);
var b = add(2,3,4,5,6,7,8);

console.log(s);
console.log(b);