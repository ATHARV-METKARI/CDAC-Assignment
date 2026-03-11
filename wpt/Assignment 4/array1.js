let arr = [];

function addItem()
{
    let value = document.getElementById("data").value;
    arr.push(value);
    document.getElementById("data").value = "";
}

function displayItems()
{
    let list = "<ul>";

    for(let i = 0; i < arr.length; i++)
    {
        list += "<li>" + arr[i] + "</li>";
    }

    list += "</ul>";

    document.getElementById("result").innerHTML = list;
}