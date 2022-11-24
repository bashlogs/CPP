#include<bits/stdc++.h>
using namespace std;
class Myclass
{
	public:
	Myclass(string name)
	{
		setname(name);
	}
	void setname(string x)
	{
		name = x;
	}
	string getname()
	{
		return name;
	}
	private:
	string name;
};
int main()
{
	Myclass obj1("David\n");
	Myclass obj2("Army");
	cout<<obj1.getname();
	cout<<obj2.getname();
}
