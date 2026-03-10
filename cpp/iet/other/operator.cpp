#include<iostream>
using namespace std;

class Complex
{

    private: int real,imaginary;

    public: void setReal(int real);

    public: Complex()
    {
        this->real=0;
        this->imaginary=1;
    }

    public: Complex(int real,int imaginary)
    {
        this->real=real;
        this->imaginary=imaginary;
    }

    public: void setImaginary(int imaginary);

    public : int getReal();

    public : int getImaginary();

    public : Complex operator+(Complex Complex);
};

void Complex ::setReal(int real)
{
    this->real=real;

}

void Complex :: setImaginary(int imaginary)
{

    this->imaginary=imaginary;
}

int Complex ::getReal()
{
    return this->real;
}

int Complex ::getImaginary()
{
    return this->imaginary;
}

Complex Complex:: operator+(Complex complex)
{

    Complex c2;
    c2.setReal((this->getReal())+(complex.getReal()));
    c2.setImaginary((this->getImaginary())+(complex.getImaginary()));

    return c2;
}


int main()
{
    Complex c1(2,3);
    Complex c2(3,2);

    Complex c3(c1+c2);

    cout<<c3.getReal()<<" + "<<c3.getImaginary()<<"i"<<endl;
    return 0;
}