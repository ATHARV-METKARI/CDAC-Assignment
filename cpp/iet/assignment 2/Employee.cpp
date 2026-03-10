/*
Create a class Employee: 
Data Members: empId name salary static int totalEmployees Global variable string
companyName Requirements: Constructor should initialize values Each time object is 
created → increment totalEmployees Function display() Static function showTotalEmployees() 
Create 5 employee objects in main and display: All employee details Total employees 
created Display company name in display function

*/
#include<iostream>
using namespace std;

/* Global Variable */
string companyName = "institue of emerging technology";

class Employee
{
private:
    int empId;
    string name;
    float salary;

public:
    static int totalEmployees;

    
    Employee(int id, string n, float s)
    {
        empId = id;
        name = n;
        salary = s;

        totalEmployees++; 
    }

    void display()
    {
        cout<<"Employee ID: "<<empId<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Salary: "<<salary<<endl;
        cout<<"Company: "<<companyName<<endl;
        cout<<"-------------------------"<<endl;
    }

    static void showTotalEmployees()
    {
        cout<<"Total Employees: "<<totalEmployees<<endl;
    }
};

int Employee::totalEmployees = 0;

int main()
{
    Employee e1(101,"Rahul",45000);
    Employee e2(102,"Amit",50000);
    Employee e3(103,"Sneha",48000);
    Employee e4(104,"Priya",52000);
    Employee e5(105,"Arjun",47000);

    cout<<"Employee Details\n\n";

    e1.display();
    e2.display();
    e3.display();
    e4.display();
    e5.display();

    Employee::showTotalEmployees();

    return 0;
}