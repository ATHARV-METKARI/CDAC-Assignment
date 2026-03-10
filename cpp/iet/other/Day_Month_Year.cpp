/*create a date class and write a function to change day ,date, year*/
#include<iostream>
using namespace std;

class Date
{


    private:
    int day,month,year;

    public: void setDay(int day)
    {

        this->day=day;
    }

    public: void setMonth(int month)
    {

        this->month=month;
    }

    public: void setYear(int year)
    {

        this->year=year;
    }

    public: int getDay()
    {
        return this->day;
    }

    public: int getMonth()
    {
        return this->month;
    }

    public: int getYear()
    {
        return this->year;
    }

    public: void displayDate()
    {

        cout<<this->day<<" / "<<this->month<<" /"<<this->year<<endl;

    }

};

int main()
{


    Date date;

    date.setDay(1);
    date.setMonth(3);
    date.setYear(2002);
    date.displayDate();
    return 0;
}