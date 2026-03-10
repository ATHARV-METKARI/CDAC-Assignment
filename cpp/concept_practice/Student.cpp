#include<iostream>
using namespace std;

class Student
{

    private : int roll;
    private : int marks;
    private : string name;

    public: Student(); //constructor
    public: Student(int roll,string name ,int marks);

    public: void setRoll(int roll);//mutator
    public: int getRoll();//accessor

    public: void setMarks(int marks);//mutator   
    public : int getMarks();//accessor

    public :void setName(string name);//mutator
    public : string getName();//accessor

    friend ostream& operator<<(ostream& out ,Student& s);//facilator
};

Student :: Student()
    {

        roll=1;
        marks=100;
        name="Atharv Metkari";
    }

Student :: Student(int roll,string name ,int marks)
    {

        this->name=name;
        this->roll=roll;
        this->marks=marks;
    }

void Student :: setRoll(int roll)
{

    this->roll=roll;
    
} 

void Student :: setMarks(int marks)
{
 
    this->marks=marks;
}

int Student :: getRoll()
{
    return this->roll;
}

int Student :: getMarks()
{
    return this->marks;
}

void Student :: setName(string name)
{

    this->name=name;
}

string Student :: getName()
{

    return this->name;
}

ostream& operator<<(ostream& out ,Student& s)
{
    out<<"Student Roll :"<<s.getRoll()<<endl;
    out<<"Student Name :"<<s.getName()<<endl;
    out<<"Student Marks :"<<s.getMarks()<<endl;

    return out;
}

int main()
{
    Student s1;

    Student *s2=new Student(101,"Pranali Metkari",99);

    Student *studentList=new Student[5];

    Student *student_pointer_array[3];
    /*
    for(int i=0;i<5;i++)
    {
        int roll,marks;
        string name;

        cin>>roll>>marks>>name;

        studentList[i].setMarks(marks);
        studentList[i].setName(name);
        studentList[i].setRoll(roll);
    }
    
    

    cout<<s1<<*s2<<endl;

    for(int i=0;i<5;i++)
    {
        cout<<studentList[i]<<endl;
    }

    */
    string x=student_pointer_array[0]->getName();

    cout<<x;
    return 0;
}