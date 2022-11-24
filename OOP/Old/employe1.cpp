#include<iostream>
using namespace std;
class employee
 {
   private:
    int empid,salary;
    char name[30];
   public:
     void getdata()
	 {
	     cout<<"\nEnter empid,name,salary";
	   cin>>empid>>name>>salary;
	 }
     void putdata()
	 {
	  cout<<"\nName="<<name<<"\nID="<<empid<<"\nSalary="<<salary;
	 }
 }
int main()
  {
	class employee a;
	a.getdata();
	a.putdata();
	return 0;
  }
