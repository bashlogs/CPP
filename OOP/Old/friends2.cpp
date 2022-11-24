#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class Student
{
int roll;
float m1,m2;

public:
	  void getdata();
	  void display();
	  friend void avg(Student s);

  };
	  void Student::getdata()
	  {
		   cout<<"enter roll: ";
		   cin>>roll;
		   cout<<"enter marks in 2 subjects:\n";
		   cin>>m1>>m2;
	    }
	  void Student::display()
	   {
	     cout<<"roll: "<<roll;
	     cout<<" \nMarks:\n";
	     cout<<m1<<"\t"<<m2<<"\n";
	   } ;
	   void avg(Student s)
	  {
		float sum=0;
		sum = s.m1 + s.m2;
		cout<<"\nAvg. Marks= "<<sum/2;
	  }
	 void  main()
	  {
	  clrscr();
	  Student s1;
	  s1.getdata();
	  s1.display();
	  avg(s1);
	  getch();
	  }
