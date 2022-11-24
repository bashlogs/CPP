#include<iostream.h>
#include<conio.h>
class Student
{
	int roll;
	int marks;
	public:
	Student()
	{
	 cout<<"In constructor, allocating memory :\n";
	 cout<<"Enter roll,marks :";
	 cin>>roll>>marks;
	  }
	  ~Student()
		{
		  cout<<"In destructor, destroying objects... ";
		 }

	  void show()
	  {
	       cout<<" Roll: "<<roll<<"\n"<<"Marks: "<<marks<<"\n";
	  }
	  };
	  main()
	  {
		clrscr();
		Student *s1;
		s1= new Student();
		s1->show();
		delete s1;
	  }
