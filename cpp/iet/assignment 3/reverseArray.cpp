/*

Write a program to reverse the array elements.

Example
Input: 1 2 3 4 5
Output: 5 4 3 2 1

*/

#include<iostream>
using namespace std;

int main()
{
    int arr[5];

    cout<<"Enter 5 elements: ";

    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout<<"Reversed array: ";

    for(int i = 4; i >= 0; i--)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}