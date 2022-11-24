#include<iostream>
using namespace std;
class friends
{
int roll;
float m1,m2;
	public:
		void setdata();
		void getdata();
		friend void avg(friends f);
};

	void friends ::setdata(){
	cout<<"Enter your roll_no:";
	cin>>roll;
	cout<<"\nEnter your marks of the two subjects";
	cin>>m1>>m2;
	}
	void friends :: getdata(){
	cout<<"\nYour Roll_no is:"<<roll;
	cout<<"\nYour marks is:"<<m1<<" "<<m2;
	}
	void avg(friends f){
	float sum=0;
	sum = f.m1+f.m2;
	cout<<"\nYour Total average is: "<<sum/2;
	}
int main()
{
	friends f1;
	f1.setdata();
	f1.getdata();
	avg(f1);
	return 0;
}
