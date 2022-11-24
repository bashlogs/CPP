#include<bits/stdc++.h>
using namespace std;
class Myclass
{
	public:
	int stand;
	int roll_no;
	void setid()
	{
		cout<<"Enter your class";
		cin>>stand;
		cout<<"\nEnter your roll_no";
		cin>>roll_no;
		cout<<"\nEnter your name: ";
		cin>>name;
	}
	void getid()
	{
		cout<<"\nYour class is: "<<stand;
		cout<<"\nYour roll_no is: "<<roll_no;
		cout<<"\nYour name is: "<<name;
	}
	private:
	string name;
};
int main()
{
	class Myclass myobj;
	myobj.setid();
	myobj.getid();
	return 0;
}
