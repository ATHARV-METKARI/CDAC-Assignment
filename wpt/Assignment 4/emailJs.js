document.getElementById("btn").addEventListener("click", validate);

function validate()
{
    let value = document.getElementById("mail").value;

    let pattern = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;

    if(pattern.test(value))
    {
        document.getElementById("result").innerHTML = "Valid Email";
    }
    else
    {
        document.getElementById("result").innerHTML = "Invalid Email";
    }
}