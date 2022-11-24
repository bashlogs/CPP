#include<iostream>
using namespace std;
class base
{
	public:
		base()
		{
			cout<<"Constructor base"<<endl;
		}
		virtual ~base()
		{
			cout<<"Destructor base"<<endl;
		}
};
class derived : public base 
{
	public:
		derived()
		{
			cout<<"Constructor derived"<<endl;
		}
		~derived()
		{
			cout<<"destructor derived"<<endl;
		}
};
int main(void)
{
	derived *d = new derived();//it wil go to the derived function but derived function is daughter of the base

	base *a = d; //so *a is equal to the d
	delete a;//it giving the permissionof the delete the a;
	getchar();
	return 0;
}
