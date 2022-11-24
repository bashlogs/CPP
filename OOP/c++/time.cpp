#include<iostream>
using namespace std;
class time
{
	int hours;
	int minutes;
	public:
	void gettime(int h, int m)
	{
		hours=h;
		minutes = m;
	}
	void puttime()
	{
	cout<<"hours is:"<<hours;
	cout<<"\nMinutes is:"<<minutes;
	}
	void sum(time t1,time t2);
};

void time ::sum(time t1, time t2)
{
	int mi;
	int hou;
	int hou1;
	mi = t1.minutes + t2.minutes;
	if(mi > 60)
	{
	hou = minutes/60;
	hou1 = minutes%60;
	cout<<"\nHours taken by the t1 and t2 is :"<<hou;
	cout<<"\nminutes take by the t1 and t2 is :"<<hou1;
	}
	else
	{
	cout<<"\n total hours taken by the t1 and t2 is:"<<t1.hours+t2.hours;
	cout<<"\n total minutes taken by the t1 and t2 is :"<<mi;
	}
}
int main(void)
{
	class time t1,t2,t3;
	t1.gettime(2,10);
	t2.gettime(3,33);
	cout<<"\nt1 time is: ";
	t1.puttime();
	cout<<"\nt2 time is:";
	t2.puttime();
	cout<<"\nt3 time is:";
	t3.sum(t1,t2);
	return 0;
}
