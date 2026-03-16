class Employee {
    constructor(firstName, lastName, email, designation, salary) {
        this.firstName = firstName;
        this.lastName = lastName;
        this.email = email;
        this.designation = designation;
        this.salary = salary;
    }

    getFirstName() {
        return this._firstName;
    }

    getLastName() {
        return this._lastName;
    }

    getEmail() {
        return this._email;
    }

    getDesignation() {
        return this._designation;
    }

    getBasicSalary() {
        return this._basicSalary;
    }

    setFirstName(firstName) {
        this._firstName = firstName;
    }

    setLastName(lastName) {
        this._lastName = lastName;
    }

    setEmail(email) {
        this._email = email;
    }

    setDesignation(designation) {
        this._designation = designation;
    }

    setBasicSalary(basicSalary) {
        this._basicSalary = basicSalary;
    }


    displayEmployee() {
        console.log("First Name :", this.fname);
        console.log("Last Name :", this.lname);
        console.log("Email :", this.email);
        console.log("Designation :", this.designation);
        console.log("Salary :", this.salary);
    }
}

module.exports = Employee;