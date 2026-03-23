
class Employee
{
    
    constructor(fn , ln , el , ds , bs)
    {
        this.firstname = fn
        this.lastname = ln
        this.email = el
        this.designation = ds
        this.basicSalary = bs
    }

    display()
    {
        console.log("Employee Details : \n")
        console.log("First Name : " + this.firstname + "\n")
        console.log("Last Name : " + this.lastname + "\n")
        console.log("Email : "+ this.email + "\n")
        console.log("Designation : " + this.designation + "\n")
        console.log("BasicSalary : " + this.basicSalary + "\n")
    }

    getfirstname()
    {
        return this.firstname;
    }
    getlastname()
    {
        return this.lastname;
    }
    getemailname()
    {
        return this.email;
    }
    getdesignation()
    {
        return this.designation;
    }
    getbasicSalary()
    {
        return this.basicSalary;
    }


    setfirstname(fn)
    {
        return this.firstname = fn;
    }
    setlastname(ln)
    {
        return this.lastname = ln;
    }
    setemail(el)
    {
        return this.email = el;
    }
    setdesignation(ds)
    {
        return this.designation = ds;
    }
    setbasicSalary(bs)
    {
        return this.basicSalary = bs;
    } 

}

export default Employee;
