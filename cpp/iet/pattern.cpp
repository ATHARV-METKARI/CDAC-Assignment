#include<iostream>
using namespace std;

void lowerLeftTriangle()
{

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

}

void uperLeftTriangle()
{
      for(int i=0;i<5;i++)
    {
        for(int j=5;j>i;j--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main()
{

     for(int i=0;i<5;i++)
    {
        for(int j=5;j>0;j--)
        {
            if(i>=j)
            {
                cout<<" *";
            }
        }
        cout<<endl;
    }
    

    return 0;
}