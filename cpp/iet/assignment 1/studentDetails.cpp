#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int rollNo;
    float totalMarks;
    string dateBirth;

public:

    // Parameterized Constructor
    Student(int r, float m, string d)
    {
        rollNo = r;
        totalMarks = m;
        dateBirth = d;
    }

    // Display Function
    void display()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Total Marks: " << totalMarks << endl;
        cout << "Date of Birth: " << dateBirth << endl;
        cout << "-----------------------" << endl;
    }

    // Getter functions for sorting
    int getRollNo()
    {
        return rollNo;
    }

    float getMarks()
    {
        return totalMarks;
    }

    string getDOB()
    {
        return dateBirth;
    }
};

int main()
{
    Student students[10] = {
        Student(5, 450, "12-03-2003"),
        Student(2, 380, "01-08-2004"),
        Student(9, 420, "10-01-2003"),
        Student(1, 470, "15-02-2004"),
        Student(7, 390, "30-06-2003"),
        Student(4, 410, "21-09-2004"),
        Student(6, 430, "11-12-2003"),
        Student(3, 460, "05-07-2004"),
        Student(8, 400, "18-11-2003"),
        Student(10, 395, "02-04-2004")
    };

    cout << "Student Data:\n\n";

    for(int i=0;i<10;i++)
    {
        students[i].display();
    }

    return 0;
}