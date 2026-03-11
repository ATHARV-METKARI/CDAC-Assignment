function convertText(type)
{
    let text = document.getElementById("textInput").value;
    let output = "";

    if(type === "upper")
        output = text.toUpperCase();
    else if(type === "lower")
        output = text.toLowerCase();
    else
        output = text;

    document.getElementById("result").innerHTML = output;
}