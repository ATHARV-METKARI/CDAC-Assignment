/*accept elements of an array from the user and display minimum and maximum number*/

#include<iostream>
using namespace std;
int minArrayValue(int array[],int length)
{

    int min=array[0];
    for(int i=1;i<length;i++)
    {

        if(array[i]<min)
        {
            min=array[i];
        }


    }

    return min;
}

int maxArrayValue(int array[],int length)
{

    int max=array[0];
    for(int i=1;i<length;i++)
    {

        if(array[i]>max)
        {
            max=array[i];
        }


    }

    return max;
}



int main()
{
int n;
cout<<"enter the length of array"<<endl;
cin>>n;
int array[n];

for(int i=0;i<n;i++)
{

    cout<<"enter the "<<i+1<<" th element of the array"<<endl;
    cin>>array[i];

}

int max,min;

min=minArrayValue(array,n);
max=maxArrayValue(array,n);

cout<<"maximum element of an array is "<<min<<endl;
cout<<"minimum element of an array is "<<max<<endl;

return 0;
}