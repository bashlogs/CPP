#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class student
{
int roll, marks;
static int totmarks;
public:
	  void getdata();
	  void display();
	  static void showtot()
	  {
		cout<<"\nTotal Marks= "<<totmarks;
	  }
	  void avg()
	  {
		cout<<"\nAvg. Marks= "<<(float)marks/totmarks*100;
	  }
  };
	  void student::getdata()
	  {
		   cout<<"enter roll";
		   cin>>roll;
		   cout<<"enter marks:\n";
		   cin>>marks;
		}
	  void student::display()
	  {
	  cout<<"roll:"<<roll;
	  avg();
	  } ;
	  int student:: totmarks=900;
	 void  main()
	  {
	  clrscr();
	  student s1,s2;
	  s1.getdata();
	  s1.display();  
          student::showtot();      
	  s2.getdata();
	  s2.display();
	  student::showtot();
	  getch();
	  }
