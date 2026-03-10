#include<iostream>
using namespace std;
int main()
{

    int *ptr_1;
    //int ptr_2*; not allowed

    int a=10;
    ptr_1=&a;

    cout<<ptr_1<<endl;//gives address at which pointer is pointing

    int * *ptr_2=&ptr_1;//pointer to pointer

    // ptr_2-> only be used on structures and classes;

    //==================================================================================================================//

    //Pointer To An Array

    int array[5];
    
    int *ptr_3=array;

    return 0;

}