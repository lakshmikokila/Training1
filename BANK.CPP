#include<iostream.h>
#include<conio.h>
class Bank
{
	public:
	int amount, withdraw,deposit;
	int balance,i=0;
	void get()
	{
	cout<<"Enter the Amount:";
	cin>>amount;
	do
	{
	int ch;
	cout<<"1.Enter the Withdraw amount:"<<endl;
	cout<<"2.Enter the deposit amount:"<<endl;
	cin>>ch;
	switch(ch)
	{
	case 1:
		int w=0;
		cout<<"Enter the amount to withdraw:";
		cin>>withdraw;
		balance=amount-withdraw-(withdraw*(0.5/100));
		w++;
		if(w++)
		withdraw_amt();
		cout<<"Amount"<<balance;
		break;
	case 2:
		int d=0;
		cout<<"Amount to deposit:";
		cin>>deposit;
		balance=amount+deposit-(deposit*(0.25/100));
		d++;
		if(d++)
		deposit_amt();
		cout<<"Amount:"<<amount;
		break;
	case 3:
		break;
	default:
		cout<<"Enter the right Choice";
		break;
	}
	} while(i>6);
	i++;


	}
	void withdraw_amt()
	{
		balance=amount-withdraw-(withdraw*(0.40/100));
		cout<<"Balance Amount:"<<balance;
	}
	void deposit_amt()
	{
		balance=amount+deposit-(deposit*(0.25/100));
		cout<<"Balance Amount:"<<balance;
	}
};
void main()
{
	Bank b1;
	clrscr();
	b1.get();
	getch();
}