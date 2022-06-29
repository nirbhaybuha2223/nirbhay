#include <iostream>
using namespace std;
class bank
{
    int balance;

public:
    bank(int);
    void deposite(int);
    void withdraw(int);
    int showbalance();
};
bank::bank(int amt)
{
    balance = amt;
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
    int dep_amt,n;
    bank nirbhay(1000);
    cout << "\n balance" << nirbhay.showbalance();
    nirbhay.deposite(n);
    cout<<"Entewr the Amount of deposite";
    cin>>n;
    cout << "\n balance" << nirbhay.showbalance();
}
