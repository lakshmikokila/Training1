#include<iostream.h>
#include<conio.h>
class Insert
{
	public:
		int i,j,arr[10],n,temp;
		void get()
		{
			cout<<"Enter the no.of Elements:";
			cin>>n;
			cout<<"Enter the numbers:";
			for(i=0;i<n;i++)
			{
				cin>>arr[i];
			}
		}
		void process()
		{
			for(i=1;i<n-1;i++)
			{
				temp=arr[i];
				j=i-1;
				while(temp<arr[j] && j>=0)
				{

				    arr[j+1]=arr[j];
				    j--;
				}
				arr[j+1]=temp;
			}

			for(j=0;j<n;j++)
			{
				cout<<arr[j];
			}
	}

};
void main()
{
	Insert i1;
	clrscr();
	i1.get();
	i1.process();
	getch();
}


