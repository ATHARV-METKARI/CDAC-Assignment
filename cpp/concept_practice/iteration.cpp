#include<iostream>
using namespace std;



void fun1()
{

    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i-1;j++)
        {

            cout<<"i = "<<i<<" j = "<<j<<" || ";
        }
        
        cout<<endl;
        
    }
}

void T_pattern()
{

    for(int i=1;i<=5;i++)
    {

        for(int j=0;j<=3;j++)
        {

            if(i==0)
            {
                cout<<"*";
            }
        }

    }
}


int main()
{


fun1();

    return 0;
}