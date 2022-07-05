#include<iostream>
using namespace std;
class bank
{
    int balance,n;
    public:
    bank(int);
    bank(bank &);
    ~bank();
    void deposite(int);
    void withdraw(int);
    int showbalance();
    
};
bank::~bank()
{
}
bank::bank(int amt)
{
    balance = amt;
}
bank::bank(bank &obj)
{
    balance = obj.balance;
}
void bank::withdraw(int amt)
{
    balance -= amt;
}
void bank::deposite(int amt)
{
    balance += amt;
}
int bank::showbalance()
{
    return balance;
}
int main()
{
    int dep,wd,total,n;
    bank me1(1000);
    bank me2(me1);
    cout<<"\n balance : "<<me1.showbalance();
    cout<<"\n balance : "<<me2.showbalance();
   do{
        cout<<"\n Enter 1 for Deposite ";
        cout<<"\n Enter 2 for Withdraw ";
        cout<<"\n Enter 9 for Show Balance ";
        cout<<"\n Enter 0 for Exit ";
   
        cout<<"\n Enter your choice : ";
        cin>>n;
    switch(n)
    {
        case 1:
            cout<<"\n Enter Deposite : ";
            cin>>dep;
            me1.deposite(dep);
            break;
        case 2:    
            cout<<"\n Enter Withdraw Amount : ";
            cin>>wd;
            me1.withdraw(wd);
            break;
        case 9:
            cout<<"\n Show Balance : "<<me1.showbalance();
            break;
        case 0:
            cout<<"\n Exit ";
            return 0;
            break;
        default:
            cout<<"\n Envalid choice ";
    }
    n++;
    }while(n<=10);
}




