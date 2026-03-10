#include<iostream>
using namespace std;

class Matrix
{

int n;
int **matrix; 

public :Matrix(int n);

int getN();

void setValue(int i,int j,int value);

int getValue(int i,int j);


};
/*-----------------------all function defination------------------------------------------------------*/
Matrix::Matrix(int n)
{
    this->n=n;
    matrix= new int*[n];

    for(int i=0;i<n;i++)
    {
        matrix[i]=new int[n];
    }
    
}

int Matrix:: getN()
{

    return this->n;
}

void Matrix:: setValue(int i,int j,int value)
{

    this->matrix[i][j]=value;

}

int Matrix:: getValue(int i,int j)
{

    return this->matrix[i][j];
}

/*--------------------------------------------------------------------------------------------------------------*/
int main()
{
    int n=7;

    Matrix m1(n);

    for(int i=0;i<n;i++)
    {

        for(int j=0;j<=i;j++)
        {

            if(j==0 || j==i)
            {
               m1.setValue(i,j,1);
            }
            else
            {

                int p=m1.getValue(i-1,j-1);
                int q=m1.getValue(i-1,j);
                
                m1.setValue(i,j,(p+q));

            }
        }
    }

    for(int i=0;i<n;i++)
    {

        for(int j=0;j<n-i-1;j++)
        {
            cout<<"  ";
        }

        for(int k=0;k<=i;k++)
        {

            cout<<m1.getValue(i,k)<<"  ";



        }
        cout<<endl;

    }

    return 0;
}