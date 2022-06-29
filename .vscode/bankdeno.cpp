#include <iostream>
using namespace std;
class bank
{
    float b = 0;

public:
    void getdata()
    {
        char a;
        cout << "Enter the option from the following : \na-Withdraw\nb-Deposit\nc-ShowBalance \n Option : ";
        cin >> a;
        if (a == 'a')
        {
            withdraw();
        }
        else if (a == 'b')
        {
            deposit();
        }
           else if (a == 'c')
           {
               display();
           }
        else
        {
            cout << "Invalid response!!";
            return getdata();
        }
    }
    void deposit()
    {
        int d;
        cout << "\n Enter deposit ammount :";
        cin >> d;
        b += d;
        cout << "\n  " << d << " is added in your bank";
    }
    void withdraw()
    {
        int w;
        cout << "\n Enter withdraw ammount :";
        cin >> w;
        if (w > b)
        {
            cout << "\n you not able to withdraw";
        }
        else
        {
            b -= w;
        }
    }
    void display()
    {
        cout << "\n  total ammount in your bank is :" << b;
    }
};

int main()
{
    bank b;
    b.getdata();
    b.display();
}
