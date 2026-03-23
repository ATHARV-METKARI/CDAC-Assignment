console.log(process.argv);
var sum=0
for(var i=0 ; i<process.argv.length;i++)
{
    if(Number(process.argv[i])%2==0)
    {
       sum = sum+(Number(process.argv[i]))
    }

}
console.log(sum)
console.log(process.argv[2])