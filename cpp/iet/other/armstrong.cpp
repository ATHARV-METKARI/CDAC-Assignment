/*

armstrong 

*/

#include<iostream>
using namespace std;

int main()
{
    int num, original, remainder;
    int result = 0;

    cout<<"Enter a number: ";
    cin>>num;

    original = num;

    while(num != 0)
    {
        remainder = num % 10;
        result = result + remainder * remainder * remainder;
        num = num / 10;
    }

    if(result == original)
        cout<<"Armstrong Number";
    else
        cout<<"Not an Armstrong Number";

    return 0;
}