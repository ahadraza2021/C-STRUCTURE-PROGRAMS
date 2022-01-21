/*
Task7: Write a structure declaration to hold the following data about a savings account:
Account Number ( string object) Account Balance ( double ) Interest Rate ( double )
Average Monthly Balance ( double )
*/
#include<iostream>
using namespace std;
struct account
{
	string account_number;
	double account_balance;
	double interest_rate;
	double montly_balance;
};
int main()
{
	account str[14];
	for(int i=1;i<=14;i++)
	{
		cout<<"Enter your Account Number:";
		cin>>str[i].account_number;
		cout<<"Enter your Account Balance:";
		cin>>str[i].account_balance;
		cout<<"Enter your Interest Rate:";
		cin>>str[i].interest_rate;
		cout<<"Enter your Montly Balance:";
		cin>>str[i].montly_balance;
		cout<<endl;
	}
	for(int i=1;i<=14;i++)
	{
		cout<<"YOUR ACCOUNT NUMBER:"<<str[i].account_number<<endl;
		cout<<"YOUR ACCOUNT BALANCE:"<<str[i].account_balance<<endl;
		cout<<"YOUR INTEREST RATE:"<<str[i].interest_rate<<endl;
		cout<<"YOUR MONTLY BALANCE:"<<str[i].montly_balance<<endl;
	}
	return 0;
}
