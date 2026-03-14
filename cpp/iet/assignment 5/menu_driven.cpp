/*
Q.3. Create a menu-driven program.
Menu:
1.Check Balance
2. Deposit Money
3. Withdraw Money
4. Exit
*/

#include<iostream>
using namespace std;

class Account
{
protected:
    int number;
    int balance;

public:
    Account(int number,int balance)
    {
        this->number = number;
        this->balance = balance;
    }

    void checkBalance()
    {
        cout<<"Current Balance: "<<balance<<endl;
    }

    void deposit(int amount)
    {
        balance = balance + amount;
        cout<<"Amount Deposited Successfully"<<endl;
    }

    void withdraw(int amount)
    {
        if(amount > balance)
        {
            cout<<"Insufficient Balance"<<endl;
        }
        else
        {
            balance = balance - amount;
            cout<<"Please collect your money"<<endl;
        }
    }
};

class Atm : public Account
{
public:
    Atm(int number,int balance) : Account(number,balance)
    {
    }
};

int main()
{
    int choice,amount;

    Atm a1(101,5000);

    do
    {
        cout<<"\n------ ATM MENU ------\n";
        cout<<"1. Check Balance\n";
        cout<<"2. Deposit Money\n";
        cout<<"3. Withdraw Money\n";
        cout<<"4. Exit\n";
        cout<<"Enter Choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                a1.checkBalance();
                break;

            case 2:
                cout<<"Enter Amount to Deposit: ";
                cin>>amount;
                a1.deposit(amount);
                break;

            case 3:
                cout<<"Enter Amount to Withdraw: ";
                cin>>amount;
                a1.withdraw(amount);
                break;

            case 4:
                cout<<"Thank you for using ATM"<<endl;
                break;

            default:
                cout<<"Invalid Choice"<<endl;
        }

    }while(choice != 4);

    return 0;
}