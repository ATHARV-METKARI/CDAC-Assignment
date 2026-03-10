/*
WAP to print Reverse Alphabet Pattern

A B C D E
A B C D
A B C
A B
A
*/
#include<iostream>
using namespace std;

int main()
{
    int rows = 5;

    for(int i = rows; i >= 1; i--)
    {
        for(int j = 0; j < i; j++)
        {
            cout << char('A' + j) << " ";
        }
        cout << endl;
    }

    return 0;
}