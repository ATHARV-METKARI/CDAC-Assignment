/*accept real and imaginary number from user and display complex nuimber*/
#include<iostream>
using namespace std;

class ComplexNumber
{

    private :
    int real,imaginary;

    

    public:void setReal(int real)
    {
        this->real=real;

    }

    public:void setImaginary(int imaginary)
    {
        this->imaginary=imaginary;
    }

    public:int getReal()
    {
        return real;
    }

    public:int getImaginary()
    {
        return imaginary;
    }

    public:void displayComplexNumber()
    {
        cout<<this->getReal()<<" + "<<this->getImaginary()<<"i"<<endl;
    }



};


int main()
{

    ComplexNumber complexNumber;

    complexNumber.setReal(2);
    complexNumber.setImaginary(3);

    complexNumber.displayComplexNumber();

    return 0;
}