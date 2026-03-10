/*display prime numbers between 2 to 20*/

#include <iostream>
using namespace std;

int main()
{

    int number=4;

    cout<<3<<endl;
    while(number<20)
    {
        for(int i=2;i<number;i++)
        {
            if((number%i)==0 && i!=(number-1))
            {

                break;
            }
            else if (i==number-1 && (number%i)!=0)
            {
                cout<<number<<endl;
            }
        }
        number ++;
    }
    return 0;
}