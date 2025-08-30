#include<iostream.h>
#include<conio.h>

inline double cube(int x)
{
	return x*x*x;
}

void main()
{
	int a;
	clrscr();
	cout<<"\nEnter Value :";
	cin>>a;
	cout<<"\nThe cube of "<<a<<" is : "<<cube(a);
	getch();
}