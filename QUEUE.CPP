#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
class Queue
{
	public:
		int q[10],front,rear,n,result;
		void enque();
		void deque();
		void display();
		Queue()
		{
			front=0;
			rear=0;
		}
};
void Queue::enque()
{
	if(rear>=10)
	cout<<"\n Queue Overflow\n";
	else
	{
		cout<<"\n Enter the number to be inserted:";
		cin>>n;
		rear++;
		q[rear]=n;
		cout<<"Pushed Element:"<<q[rear];
	}
}
void Queue::deque()
{
	if(rear==0)
	cout<<"\n Queue underflow! \n";
	else
	{
	if(front==rear)
	front=0;
	rear=0;
	}
	front++;
	cout<<"\n Deleted Element ";
	result=q[front];
	cout<<result;
}
void Queue::display()
{
	if(rear==0)
	cout<<"\nQueue Underflow";
	else
	cout<<"The Elements are";
	for(int i=front+1;i<=rear;i++)
	cout<<q[i]<<" ";
}
void main()
{
	int c;
	Queue q1;
	clrscr();
       while(1)
	{
	cout<<"\n 1.Inserted \n 2.Deletion \n3.Display \n 4.Exit";
	cin>>c;
	switch(c)
	{
	case 1:
		q1.enque();
		break;
	case 2:
		q1.deque();
		break;
	case 3:
		q1.display();
		break;
	case 4:
		exit(0);
	}  getch();
	}
//	getch();

}