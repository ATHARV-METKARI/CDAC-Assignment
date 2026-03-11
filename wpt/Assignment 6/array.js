var arr = [10,20,30,40,50];

function checkValue()
{
    var value = document.getElementById("value").value;

    if(arr.includes(Number(value)))
        document.getElementById("result").innerHTML = "Value Found";
    else
        document.getElementById("result").innerHTML = "Value Not Found";
}

function addEnd()
{
    var value = document.getElementById("value").value;

    arr.push(Number(value));

    document.getElementById("arrayDisplay").innerHTML = "Array : " + arr;
}

function insertIndex()
{
    var value = document.getElementById("value").value;
    var index = document.getElementById("index").value;

    arr.splice(index,0,Number(value));

    document.getElementById("arrayDisplay").innerHTML = "Array : " + arr;
}

function removeIndex()
{
    var index = document.getElementById("index").value;

    arr.splice(index,1);

    document.getElementById("arrayDisplay").innerHTML = "Array : " + arr;
}