#include<iostream>
using namespace std;
class parent1
{
	public:
	parent1(){
		cout<<"This is the base class"<<endl;
		}
};
class parent2
{

	public:
	parent2(){
		cout<<"this is the base2 class"<<endl;
		}
};
class child : public parent1, public parent2
{
	public:
	child(){
		cout<<"This is the main class"<<endl;
		}
};
int main()
{
	child obj;
	return 0;
}


