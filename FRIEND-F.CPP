#include<iostream.h>
#include<conio.h>

class XYZ;
class ABC
{
	int a;
	public:
		void setA()
		{
			cout<<"\nEnter A : ";
			cin>>a;
		}
		friend void max(ABC a,XYZ x);
};
class XYZ
{
	int x;
	public:
		void setX()
		{
			cout<<"\nEnter B ; ";
			cin>>x;
		}
		friend void max(ABC a,XYZ x);
};
void max(ABC A,XYZ X)
{
	if(A.a>X.x)
	{
		cout<<"\nA is Max";
	}
	else
	{
		cout<<"\nX is Max";
	}
}
void main()
{
	clrscr();
	ABC A;
	XYZ X;
	A.setA();
	X.setX();
	max(A,X);
	getch();
}

