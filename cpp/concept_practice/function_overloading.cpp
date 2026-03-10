/*function overloading practice*/

#include<iostream>
using namespace std;

int add(int a=0,int b=0,int c=0)
{

    return a+b+c;

}

float add(float a=0.0f,float b=0.0f,float c=0.0f)
{

    return a+b+c;
}

int main()
{

    cout<<add();


    return 0;
}