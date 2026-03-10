#include<iostream>
using namespace std;

class Rectangle
{

    private: int length;
    private: int breath;

    //constructors
    public: Rectangle();
    public: Rectangle(int length,int breath);

    //mutators
    public: void setlength(int length);
    public: void setBreath(int breath);

    //accessor
    public: int getLength();
    public: int getbreath();

    //facilitators
    public: int area();

    friend ostream& operator<<(ostream& out,Rectangle &r);//accessor
    friend Rectangle operator+(Rectangle r1,Rectangle r2);//accessor

    friend istream& operator>>(istream& in, Rectangle &r);

};

//---------------------------------------------------------------------------

Rectangle::Rectangle()
{
    length=1;
    breath=1;
}

Rectangle::Rectangle(int length,int breath)
{

    this->length=length;
    this->breath=breath;
}

//--------------------------------------------------------------------------------

void Rectangle::setlength(int length)



{

    this->length=length;
}

void Rectangle::setBreath(int breath)
{
    this->breath=breath;
}

//-----------------------------------------------------------------------------------

int Rectangle::getLength()
{
    return this->length;
}

int Rectangle::getbreath()
{

    return this->breath;
}

//-----------------------------------------------------------------------------------

ostream& operator<<(ostream& out ,Rectangle &r)
{


    out<<"Length : "<<r.getLength()<<" Breath: "<<r.getbreath()<<endl;
    return out;
}
// operator+ overload
Rectangle operator+(Rectangle r1,Rectangle r2)
{

    Rectangle r3;
    r3.setlength(r1.getLength()+r2.getbreath());
    r3.setBreath(r1.getbreath()+r2.getbreath());

    return r3;

}

istream& operator>>(istream& in, Rectangle &r)
{

    int len,br;
    in>>len>>br;

    r.setlength(len);
    r.setBreath(br);

    return in;
}
//-------------------------------------------------------------------------------------

int main()
{
//----------------------------------------------------------------------------------
//-----------------------------------
    Rectangle r1(2,3);
//------------------------------------
    Rectangle *r2;
    r2=new Rectangle(3,4);
//------------------------------------
    Rectangle *r3;
    r3=new Rectangle[2];
//-------------------------------------
    Rectangle *r4[2];

    r4[0]=new Rectangle(4,5);
    r4[1]=new Rectangle(5,6);

//-------------------------------------

    Rectangle *r5[2];

    r5[0]=new Rectangle[2];
    r5[1]=new Rectangle[2];

    r5[0][0].setlength(6);
    r5[0][1].setBreath(7);

    r5[1][0].setlength(7);
    r5[1][1].setBreath(8);

//------------------------------------

//----------------------------------------------------------------------------------------
  
    Rectangle r6=r1 + *r2;

    cout<<r1<<endl;

    cout<<r6<<endl;


    Rectangle r7;
    cin>>r7;

    cout<<r7<<endl;

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)

        {
            cout<<r5[i][i];

        }

        
    }
    return 0;
}