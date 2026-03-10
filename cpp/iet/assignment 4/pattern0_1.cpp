#include<iostream>
using namespace std;

int main()
{

    bool value=0;

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<=i;j++)
        {
            value=!value;

            if(value==0)
            {
                cout<<1<<" ";

            }
            else
            {
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}