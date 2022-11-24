#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class Student
{
int roll;
float marks[3];

public:
	  void getdata();
	  void display();
	  void avg()
	  {
		float sum=0;
		for(int i=0;i<=3;i++)
		  {
			   sum=sum+marks[i];
		  }
		   cout<<"Avg. Marks= "<<sum/4;
	  }
  };
	  void Student::getdata()
	  {
		   cout<<"enter roll: ";
		   cin>>roll;
		   cout<<"enter marks in 4 subjects:\n";
		  for(int i=0;i<=3;i++)
		  {
			   cin>>marks[i];
		  }
	  }
	  void Student::display()
	  {
	  cout<<"roll: "<<roll;
	  cout<<" \nMarks:\n";
	   for(int i=0;i<=3;i++)
	  {
		  cout<<marks[i]<<"\n";
	  }
	  } ;
	 void  main()
	  {
	  clrscr();
	  Student s1;
	  s1.getdata();
	  s1.display();
	  s1.avg();
	  getch();
	  }
