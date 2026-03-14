/*
Q.2. Count how many digits are present in the number.
Input:
12345
Output:
Number of digits = 5
*/
#include<iostream>
using namespace std;



int main ()
{
    int number;
    cout<<"enter the value of number"<<endl;
    cin>>number;

    int count=0;

    while(number)
    {
        number/=10;
        count++;
    }

    cout<<"number of digits in the number are :-"<<count<<endl;

    return 0;

}