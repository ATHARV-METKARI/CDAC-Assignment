/*

Q.4. Write a program to Print Fibonacci series
Given an integer N, print the first N Fibonacci numbers.
The Fibonacci sequence is:
0 1 1 2 3 5 8 13 ...

*/

#include<iostream>
using namespace std;

void febonachii(int n)
{
    int prev ,crnt,nex=0;
    prev=0;
    crnt=1;


    cout<<0<<" ";

    while (n)
    {
        nex=prev+crnt;
        cout<<nex<<" ";

        prev=crnt;
        crnt=nex;
        n--;
    }
}

int main()
{

    int n;
    cout<<"enter number "<<endl;
    cin>>n;
    febonachii(n);

    return 0;
}