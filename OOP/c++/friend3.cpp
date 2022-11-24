#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class Engineer;
class Manager
{
int empid;
float salary;
char dept[10];
public:
	  void getdata();
	  void display();
	  friend void max(Manager m, Engineer e);

  };
	  void Manager::getdata()
	  {
		   cout<<"enter empid: ";
		   cin>>empid;
		   cout<<"enter salary: ";
		   cin>>salary;
		   cout<<"enter dept: ";
		   cin>>dept;
	    }
	  void Manager::display()
	   {
	       cout<<"\nempid: "<<empid;
	       cout<<"\nsalary: "<<salary;
	       cout<<"\ndept: "<<dept;
	   } ;

class  Engineer
{
int empid;
float salary;
char dept[10];
public:
	  void getdata();
	  void display();
	  friend void max(Manager m, Engineer e);

  };
	  void Engineer::getdata()
	  {
		   cout<<"enter empid: ";
		   cin>>empid;
		   cout<<"enter salary: ";
		   cin>>salary;
		   cout<<"enter dept: ";
		   cin>>dept;
	    }
	  void Engineer::display()
	   {
	       cout<<"\nempid: "<<empid;
	       cout<<"\nsalary: "<<salary;
	       cout<<"\ndept: "<<dept;
	   } ;
      void max(Manager m, Engineer e)
	      {     float maximum;
		     if(m.salary > e.salary)
			maximum=m.salary;
		     else
			maximum=e.salary;
		      cout<<"\nMaximum Salary: "<<maximum;
	      }
	 void  main()
	  {
	  clrscr();
	  Manager m1;
	  Engineer e1;
	  m1.getdata();
	  e1.getdata();
	  m1.display();
	  e1.display();
	  max(m1,e1);
	  getch();
	  }


