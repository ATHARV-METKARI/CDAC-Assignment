const fs = require('fs');


class Employee {
    constructor(id, name, department, salary) {
        this.id = id;
        this.name = name;
        this.department = department;
        this.salary = salary;
    }

    toString() {
        return `ID: ${this.id}, Name: ${this.name}, Department: ${this.department}, Salary: ${this.salary}\n`;
    }
}

const emp1 = new Employee(101, "pranav", "IT", 50000);

fs.appendFile('Employee.txt', emp1.toString(), (err) => {
    if (err) {
        console.error("Error writing to file:", err);
    } else {
        console.log("Employee data appended successfully!");
    }
});