#include <iostream>
using namespace std;

class IntArrayDSA
{

    private: int length;
    private: int *array;
    private :int ptr=0;
    
    public: IntArrayDSA(int length){
        this->length=length;

        array=new int[length];
       
    }
    
    public: void insert(int data)
    {

        if(ptr<this->length)
        {
        this->array[ptr]=data;
        ptr++;
        }
        else
        {
            cout<<"array is full";
        }
    }

    public: void insertAt(int data,int index)
    {
        if(index<this->length && index>=0)
        {
            this->array[index]=data;

        }

    }

    public: void show()
    {
        int i=0;

        while (i<length)
        {
            cout<<this->array[i]<<endl;
            i++;
            /* code */
        }
        
    }

    public: void deleteAt(int index)
    {

        this->array[index]=0;
    }

    public: int getLength()
    {
        return this->length;
    }

    public: int minimum()
    {

        int min=this->array[0];
        for(int i=1;i<this->length;i++)
        {

            if(this->array[i]<min)
            {
                min=this->array[i];
            }

        }
        return min;

    }

    public: int maximum()
    {

        int max=this->array[0];
        for(int i=1;i<this->length;i++)
        {

            if(this->array[i]>max)
            {
                max=this->array[i];
            }

        }
        return max;

    }

    public :void sortAscending()
    {
    
        for(int i=0;i<(this->length)-1;i++)
        {
            for(int j=i+1;j<this->length;j++)
            {

                if(this->array[j]<this->array[i])
                {

                    int temp=this->array[i];
                    this->array[i]=this->array[j];
                    this->array[j]=temp;
                }
            }
            
        }

    }



};

int main()
{
    int len=10;
    
    IntArrayDSA array(len);
    array.insert(2);
    array.insert(3);
    array.insert(5);
    array.insert(1);
    array.insert(8);
    array.insert(-4);
    array.insert(4);
    array.insert(6);
    array.insert(8);
    array.insert(12);
    array.show();
    cout<<"minimum value is"<<array.minimum()<<" maximum value is "<<array.maximum()<<endl;
    array.sortAscending();
    array.show();
    return 0;
}