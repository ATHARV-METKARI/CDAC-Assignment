const fs = require("fs");

if (!fs.existsSync("EmployeeDir")) {
    console.log("Directory does not exist.Creating Directory..");

    fs.mkdirSync("EmployeeDir");
    console.log("EmployeeDir Created");
}
fs.mkdirSync("EmployeeDir/Data/Records", { recursive: true });
console.log("Nested directories created");

const files = fs.readdirSync("EmployeeDir");
console.log("Contents innside EmployeeDir :", files);

fs.renameSync("EmployeeDir/Data", "EmployeeDir/EmployeeData");
console.log("Directory Renamed");

fs.rmSync("EmployeeDir/Data", { recursive: true, force: true });
console.log("EmployeeData Directory removed");
