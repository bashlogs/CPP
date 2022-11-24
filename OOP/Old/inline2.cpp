#include<iostream.h>
#include<conio.h>
inline float area(int x ,int y )
{

return x*y;
}
void main()
{
int l,b,c;
clrscr();
cout<<"enter the values of lenghth and breath";
cin>>l>>b;
c= area(l,b);
cout<<"area =" <<c;
getch();
}

