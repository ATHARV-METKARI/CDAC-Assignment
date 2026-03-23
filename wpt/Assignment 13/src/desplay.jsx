import React from "react";

function Display()
{
    let dis = "Hello MANDALI !!!!";


    const handleClick =() =>{
        console.log(dis);
    };




return(

    <div>
        <h1>Display Message</h1>


        <button type="button" onClick={handleClick}> Button </button>
    </div>
);
}

export default Display;
