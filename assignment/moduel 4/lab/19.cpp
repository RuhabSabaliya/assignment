#include<iostream>
using namespace std;
class BankAccount
{
    double balance,withdraw,deposit;
    public:
    void Balance(double b)
    {
        balance=b;
        cout<<"Balance="<<balance;
    }
    int Withdraw(double w)
    {
        withdraw=w;
        if(balance>w && balance>0)
        {
            balance=balance-w;
            cout<<"balance after withdraw: "<<balance;
        }
        else
        {
            cout<<"Enter sufficient amount";
        }
    }
    int Deposit(double d)
    {
        deposit=d;
        balance=balance+d;
        cout<<"balance after deposit="<<balance;
    }
};
int main()
{
    int choice;
    double w,d;
    BankAccount b;
    b.Balance(100000);
    cout<<"\nEnter 1 for Withdraw";
    cout<<"\nEnter 2 for Deposit";
    cout<<"\nEnter your choice=";
    cin>>choice;
switch(choice)
{
    case 1:
    {
        cout<<"Enter the amount to withdraw=";
        cin>>w;
    b.Withdraw(w);
    break;
    }
    case 2:
    cout<<"Enter the amount to deposit=";
    cin>>d;
    b.Deposit(d);
    break;
    default:
    cout<<"Invalid choice";
    break;
}
    return 0;
}