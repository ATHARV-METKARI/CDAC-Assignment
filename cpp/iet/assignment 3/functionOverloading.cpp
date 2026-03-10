/*

Write overloaded functions to find area of:
-Square
-Rectangle

Example

area(int side)
area(int length, int breadth)

*/

#include<iostream>
using namespace std;

int area(int side)
{
    return side * side;
}

int area(int length, int breadth)
{
    return length * breadth;
}

int main()
{
    cout<<"Area of Square = "<<area(5)<<endl;

    cout<<"Area of Rectangle = "<<area(10,20)<<endl;

    return 0;
}