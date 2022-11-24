#include<bits/stdc++.h>
using namespace std;
class employee
 {
   private:
    int empid,salary; //here yo need to ener the employee id and salary
    char name[30];//here is the name
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
   };
 int main()
  {
	class employee a[3];
	int i;
	for(i=0;i<3;i++)
	  {
	    a[i].getdata();
	    a[i].putdata();
	  }
	return 0;
  }
