#include<iostream.h>
#include<conio.h>
inline int prod(int x, int y)
{
	return x*y;
}
inline float div(int x, int y)
{
	return x/y;
}

  main()
  {
	clrscr();
	int a,b;
	cout<<"Enter two values: ";
	cin>>a>>b;
	cout<<" Product of a,b : "<<prod(a,b)<<"\n";
	cout<<" Division of a,b : "<<div(a,b)<<"\n";
   }
