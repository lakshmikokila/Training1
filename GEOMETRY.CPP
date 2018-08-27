#include<iostream.h>
#include<conio.h>
class Geo_2d
{
	public:
	int area;
	int surface_area(int a)
	{
	       //	int area;
		area=a*a;
		return area;
	}
	int surface_area(int l,int b)
	{
		area=l*b;
		return area;

	}
};
class Geo_3d:public Geo_2d
{
	public:
		int s,vl,t;
		int volume(int a)
		{
			s=surface_area( a);
			vl=s*a;
			return vl;
		}
		int volume(int l,int b,int h)
		{
			t=surface_area(l,b);
			vl=t*h;
			return vl;
		}

};
void main()

{
	Geo_3d square,rectangle,cube,cuboid;
	int sq,rt,cu,cubd;
	clrscr();

	sq=square.surface_area(10);
	cout<<"Surface Area of Square:"<<sq<<endl;
	rt=rectangle.surface_area(10,20);
	cout<<"Surface Area of Rectangle:"<<rt<<endl;
	cu=cube.volume(10);
	cout<<"Volume of Cube"<<cu<<endl;
	cubd=cuboid.volume(10,20,30);
	cout<<"Volume of Cuboid:"<<cubd<<endl;
	getch();
}