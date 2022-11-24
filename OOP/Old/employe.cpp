#include<conio.h>
#include<iostream.h>
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
 main()
  {

	class employee a[3];
	int i;
	clrscr();
	for(i=0;i<3;i++)
	  {
	    a[i].getdata();
	    a[i].putdata();
	  }
	getch();
  }
