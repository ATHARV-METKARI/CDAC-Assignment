#include<iostream>
using namespace std;

class Matrix
{
    int rows;
    int cols;
    int **array;

    //constructors
    public: Matrix();
    public: Matrix(int rows,int cols);

    //get matrix value
    public : void setAt(int row,int col,int data);
     
    //accessors
    public : int getRows();
    public : int getCols();
    public : int getAt(int row,int col);

    //operator overloading
    friend ostream& operator<<(ostream& out,Matrix &m);
    friend istream& operator>>(istream& in ,Matrix &m);

    //facilities
    friend Matrix operator+(Matrix m1,Matrix m2);
    friend Matrix operator-(Matrix m1,Matrix m2);
    friend Matrix operator*(Matrix m1,Matrix m2);
};
//------------------------------------------------------------------------------------------------------------------------------

Matrix::Matrix()
{
    this->rows=1;
    this->cols=1;
    
    array=new int*[rows];
    array[0] = new int[cols];
    array[0][0]=0;
}

Matrix::Matrix(int rows,int cols)
{

    this->rows=rows;
    this->cols=cols;
    
    array=new int*[rows];
    for(int i=0;i<this->rows;i++)
    {
        array[i]=new int[cols];
    }

    for(int i=0;i<this->rows;i++)
    {
        for(int j=0;j<this->cols;j++)
        {
            array[i][j]=0;
        
        }
        
    }
}

int Matrix:: getRows()
{
    return this->rows;
}

int Matrix:: getCols()
{
    return this->cols;
}

void Matrix:: setAt(int row,int col,int data)
    {

        array[row][col]=data;
    }

int Matrix:: getAt(int row,int col)
{
    return array[row][col];
}

ostream& operator<<(ostream& out,Matrix &m)
{

    for(int i=0;i<m.rows;i++)
    {
        for(int j=0;j<m.cols;j++)
        {
            out<<"| "<<m.getAt(i,j)<<" | ";
        
        }
        out<<endl;
    }

    return out;

}

istream& operator>>(istream& in ,Matrix &m)
{

    int data;

    for(int i=0;i<m.rows;i++)
    {

        for(int j=0;j<m.cols;j++)
        {
            cout<<"Enter element at ("<<i<<","<<j<<")"<<endl;
            in>>data;
            m.setAt(i,j,data);
        }
    }
    return in;

}

//adding to matrix using + operator
Matrix operator+(Matrix m1,Matrix m2)
{

    Matrix m3(m1.rows,m1.cols);

    for(int i=0;i<m3.rows;i++)
    {

        for(int j=0;j<m3.cols;j++)
        {

            m3.setAt(i,j,(m1.getAt(i,j)+m2.getAt(i,j)));
            
        }

    }

    return m3;

}
//subtraction of two matrix
Matrix operator-(Matrix m1,Matrix m2)
{

    Matrix m3(m1.rows,m1.cols);
    for(int i=0;i<m1.rows;i++)
    {
        for(int j=0;j<m1.cols;j++)
        {

            m3.array[i][j]=m1.array[i][j]-m2.array[i][j];

        }
    }
    return m3;

}

//multiplication of two matrix

Matrix operator*(Matrix m1,Matrix m2)
{

    for(int i=0;i<m1.cols;i++)
    {

        for(int j=0;j<m1.rows;j++)
        {

            

        }

    }

}
int main()
{

    Matrix m1(3,3);
    Matrix m2(3,3);
    Matrix m3(3,3);
    cin>>m1>>m2;
    
    
   
    return 0;
}