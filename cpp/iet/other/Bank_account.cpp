#include<iostream>
using namespace std;

class Bank{

    private: int accountNumber,Balance;

    public: const int ifcCode=10101;

    Bank()
    {
        accountNumber=100;
        Balance=1000;
    }

    Bank(int accountNumber,int Balance)
    {

        this->accountNumber=accountNumber;
        this->Balance=Balance;
    }

    public :void setAccountNumber(int number)
    {

        this->accountNumber=number;
    }

    public : void setBalance(int balance){

        this->Balance=balance;
    }

    public :int getAccountNumber() const
    {

        return this->accountNumber;
    }

    public : int getBalance() const
    {
        return this->Balance;
    }

    public : void withdraw(int money)
    {

        this->Balance-=money;

        cout<<"Money withdraw "<<money<<" current balance is"<<this->Balance;

    }

    public : void deposite(int money)
    {

        this->Balance+=money;

        cout<<"Money deposited "<<money<<" current balance is"<<this->Balance;

    }
};


int main()
{

    Bank bank_1(234,10000);

    Bank * bank_2=new Bank();
    bank_2->deposite(100);
    
    return 0;
}