#include<iostream>
using namespace std;
inline float area(int x ,int y )
{

return x*y;
}
int main()
{
int l,b,c;
cout<<"enter the values of lenghth and breath";
cin>>l>>b;
c= area(l,b);
cout<<"area =" <<c;
return 0;
}

