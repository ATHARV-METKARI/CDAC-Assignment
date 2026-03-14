#include<iostream>
using namespace std;

void swap(int &num1,int &num2)
{

    num1=num1^num2;
    num2=num1^num2;
    num1=num1^num2;
}
int main()
{

    int num1,num2;
    cout<<"enter num1 and num2 to swap"<<endl;
    cin>>num1>>num2;

    cout<<"num1:- "<<num1<<" num2:- "<<num2<<endl;

    swap(num1,num2);
    cout<<"num1:- "<<num1<<" num2:- "<<num2<<endl;

    return 0;
}