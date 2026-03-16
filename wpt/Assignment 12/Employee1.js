
const fs = require("fs");

class Employee {
    constructor(id, name, department, salary) {
        this.id = id;
        this.name = name;
        this.department = department;
        this.salary = salary;
    }

    getEmployeeData() {
        return `ID: ${this.id}, Name: ${this.name}, Department: ${this.department}, Salary: ${this.salary}\n`;
    }
}

const emp1 = new Employee(101, "Pratibha", "CDAC", 50000);

const fileName = "Employee.txt";

fs.appendFile(fileName, emp1.getEmployeeData(), (err) => {
    if (err) {
        console.log("Error writing file:", err);
    } else {
        console.log("Employee data appended successfully.");
    }
});