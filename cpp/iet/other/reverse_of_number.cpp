/*accept a number from user and reverse the number*/

#include<iostream>
using namespace std;

int main()
{

    int number;

    cout<<"enter the number"<<endl;
    cin>>number;

    int temp=number;
    int rev=0;
    while (temp!=0)
    {
        rev=(rev*10)+(temp%10);

        temp/=10;


    }
    

    cout<<rev<<endl;

    return 0;
}