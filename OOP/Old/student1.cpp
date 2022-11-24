#include<stdio.h>
#include<conio.h>
#include<iostream.h>

class Student
   {
   
    
       int roll;
       float marks;

    public:
	   
	 getdata()
	  {
		cout<<"enter roll: ";
		cin>>roll;
		cout<<"enter marks:";
		cin>>marks;
	  }
	
	display()
	  {
	  	cout<<"roll: "<<roll;
	  	cout<<" \nMarks:";
	  	cout<<marks<<"\n";
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
