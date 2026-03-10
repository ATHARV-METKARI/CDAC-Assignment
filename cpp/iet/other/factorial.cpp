/*display factors from 3 to 10*/
#include<iostream>
using namespace std;

int main()
{

    for(int i=3;i<=10;i++)
    {

        int fact=1;
        for(int j=i;j>1;j--)
        {

            fact=fact*j;

            

        }
        cout<<"factorial of "<<i<<" is "<<fact<<endl;
    }

    return 0;
    
}