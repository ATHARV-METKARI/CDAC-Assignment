function getData(callback)
{
    console.log("Getting data...");
    callback();
}

function processData(callback)
{
    console.log("Processing data...");
    callback();
}

function displayData()
{
    console.log("Displaying data...");
}

getData(function(){

    processData(function(){

        displayData();

    });

});