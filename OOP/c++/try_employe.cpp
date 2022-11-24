#include<iostream>
using namespace std;
class employe
{
	private:
	int employe_id, salary;
	char name[100];
	public:
	void putdata()
	{
		cout<<"Enter your name";
		cin>>name;
		cout<<"\nEnter your employee id";
		cin>>employe_id;
		cout<<"\nEnter Your salary";
		cin>>salary;
	}
	void getdata()
	{
		cout<<"\nYour name is:"<<name<<endl<<"YOur is number is:"<<employe_id<<endl<<"Your salary is:"<<salary<<endl;
	}
};
int main()
{
	class employe a[2];
	int i;
	for(i=0;i<2;i++)
	{
		a[i].putdata();
		a[i].getdata();
	}
	return 0;
}
	
