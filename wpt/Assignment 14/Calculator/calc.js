export default function add2()
{
    let a = 'ba123456789ab'
    let sum = 0

    for(let i =0 ; i<a.length;i++)
    {
        if(!isNaN(Number(a[i])))
        {
            sum = sum+(Number(a[i]))
        }
    }
    console.log(sum)
}

