/*find out sum of digit of a number*/

#include<iostream>
using namespace std;

int main()
{

    int number;
    int temp;
    cout<<"enter the number"<<endl;
    cin>>number;
    temp=number;
    int sum=0;
    while(temp!=0)
    {

        sum+=(temp%10);
        temp/=10;

    }

    cout<<"sum of digits of the number is "<<sum<<endl;

    return 0;
}


    
