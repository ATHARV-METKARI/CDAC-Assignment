function convert()
{

    var amount = document.getElementById("amt").value;
    var from = document.getElementById("from").value;
    var to = document.getElementById("to").value;

    var result;

    if(from=="rupee" && to=="dollar")
        result = amount/80;

    else if(from=="dollar" && to=="rupee")
        result = amount*80;

    else if(from=="rupee" && to=="euro")
        result = amount/90;

    else if(from=="euro" && to=="rupee")
        result = amount*90;

    else if(from=="dollar" && to=="euro")
        result = amount*0.9;

    else if(from=="euro" && to=="dollar")
        result = amount*1.1;

    else
        result = amount;

    document.getElementById("result").innerHTML = "Converted Amount: " + result;

}