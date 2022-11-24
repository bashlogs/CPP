#include<iostream.h>
#include<conio.h>
class Student
{
	int roll;
	int m1,m2;
	public:
	Student()
	{
	 cout<<"In constructor, allocating memory :\n";
	 cout<<"Enter roll,m1,m2 :";
	 cin>>roll>>m1>>m2;
	  }
	  ~Student()
		{
		  cout<<"In destructor, destroying objects... ";
		 }

	 friend void avg(Student s);
	  void show()
	  {
	       cout<<" Roll: "<<roll<<"\n"<<"Marks: "<<m1<<m2<<"\n";
	  }
	  };
	  void avg(Student s)
	  {
		cout<<" Average marks are : "<<(s.m1+s.m2)/2;
	  }
	  main()
	  {
		clrscr();
		Student *sp,s1;
		sp= new Student();
		s1=&sp;
		sp->show();
		avg(s1);
		delete sp;
	  }
