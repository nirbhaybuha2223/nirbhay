#include <iostream>
using namespace std;


int main()
{
	double monthlyPayment, balance, interestRate, intrestSum;
	int month = 1;

	cout.setf(ios::fixed);	 
	cout.setf(ios::showpoint); 
    
    cout.precision(2);

	cout << "Enter the current balance of your loan: $";
	cin >> balance;
	cout << "Enter the interest rate (compounded monthly) : ";
	cin >> interestRate;
	cout << "Enter the desired monthly payment : $";
	cin >> monthlyPayment;

	while (interestRate >= 1)
        
		interestRate = interestRate / 100;

	balance = balance * (1 + interestRate / 12) - monthlyPayment;

	cout<<"After month "<<month<<", your balance is : $"<<balance<<endl;
		
	while (balance > 0)
	{
	month++;
		
	if (balance < monthlyPayment)
	{
   	    balance = balance - balance;
	    cout << "You have paid off the loan after " << month <<" months's. Congratulations!" << endl;
	}	
	else 
	{
	   balance = balance * (1 + interestRate / 12) - monthlyPayment;
	   cout << "After month " << month << ", your balance is : $" << balance << endl;
	}
	
	return 0;
}