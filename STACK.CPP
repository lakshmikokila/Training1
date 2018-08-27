#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class Stack
{
	int arr[10],top;
	public:
		Stack()
		{
			top=-1;
		}
		void push(int a)
		{
			if(top>10)
			{
				cout<<"\n Stack Overflow";
				return;
			}
			arr[++top]=a;
			cout<<endl<<a<<"inserted";
		}
		void pop()
		{
			if(top<0)
			{
				cout<<"\n Stack Underflow";
				return;
			}
			cout<<"\n Deleted"<<arr[top--];
		}
		void display()
		{
			if(top<0)
			{
				cout<<"Stack Empty";
				return;
			}
			for(int i=top;i>=0;i--)
			cout<<arr[i]<<" ";
		}
};
int main()
{
	int ch;
	clrscr();
	Stack s1;
		cout<<"\n\tSTACK USING ARRAY";
	while(1)
	{

		cout<<"\n 1.Push \n 2.POP\n 3.Display\n 4.Exit\n Enter the choice";
		cin>>ch;
		switch(ch)
		{
		case 1:
			cout<<"\nEnter the Element:";
			cin>>ch;
			s1.push(ch);
			break;
		case 2:
			s1.pop();
			break;
		case 3:
			s1.display();
			break;
		case 4:
			exit(1);
		}
	}
}