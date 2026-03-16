function changeColor()
{
    var color = document.getElementById("color").value;

    var p1 = document.getElementById("p1");
    var p2 = document.getElementById("p2");
    var p3 = document.getElementById("p3");
    var p4 = document.getElementById("p4");

    p1.style.color = color;
    p2.style.color = color;
    p3.style.color = color;
    p4.style.color = color;

    p1.style.fontWeight = "bold";
    p2.style.fontWeight = "bold";
    p3.style.fontWeight = "bold";
    p4.style.fontWeight = "bold";
}