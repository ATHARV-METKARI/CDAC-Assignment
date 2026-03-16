function fetchData() {
    return new Promise((resolve, reject) => {
        setTimeout(() => {
            resolve("Data received from server");
        }, 2000);
    });
}

async function getData() {
    console.log("Fetching Data...");

    const result = await fetchData();

    console.log(result);
    console.log("Task Completed");
}

getData();

console.log("Program Continues...")
