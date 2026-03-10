/*accept a number from the user and see if number is a palindrome or not*/
#include<iostream>
using namespace std;

int main()
{

    int number;
    cout<<"enter the number"<<endl;
    cin>>number;

    int temp=number;

    int reverse=0;
    while(temp)
    {
        reverse=(reverse*10)+(temp%10);
        temp/=10;
    }

    if(number==reverse)
    {
        cout<<"the number "<<number<<" is palindrome"<<endl;

    }
    else{
        cout<<"the number is not palindrome"<<endl;
    }

    return 0;
}