#include<iostream>
using namespace std;
inline int prod(int x, int y)
{
	return x*y;
}
inline float div(float x, float y)
{
	return x/y;
}

int main()
{
	float a,b;
	cout<<"Enter first value:"<<endl;
	cin>>a;
	cout<<"Enter second value:"<<endl;
	cin>>b;
	cout<<"The product of the two number is: "<<prod(a, b);
	cout<<"The division of the two number is: "<<div(a, b);
	return 0;
}
