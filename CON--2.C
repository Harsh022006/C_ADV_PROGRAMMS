#include<iostream.h>
#include<conio.h>

class Box
{
	double width,height,depth;
	public:
	Box()
	{
		cout<<"\nDefault Constructure called";
		width=3;
		height=4;
		depth=5;
	}
	Box(double w,double h,double d)
	{
		cout<<"\nParameterized Constructure";
		width=w;
		height=h;
		depth=d;
	}
	Box(Box &b)
	{
		cout<<"\ncopy Constructure Called";
		width=b.width;
		height=b.height;
		depth=b.depth;
	}
	void volume()
	{
		cout<<"\n Volume : "<<width*height*depth;
	}
};
void main()
{
	clrscr();
	Box b1;
	b1.volume();
	Box b2(7,8,9);
	b2.volume();
	Box b3(b1);
	b3.volume();
	getch();
}
