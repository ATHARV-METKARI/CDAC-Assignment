/*

Write a C++ program to count even and odd numbers in an array.

Example
Array: 1 2 3 4 5
Even = 2
Odd = 3

*/

#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {1,2,3,4,5};
    int even = 0, odd = 0;

    for(int i=0;i<5;i++)
    {
        if(arr[i]%2==0)
            even++;
        else
            odd++;
    }

    cout<<"Even = "<<even<<endl;
    cout<<"Odd = "<<odd;

    return 0;
}