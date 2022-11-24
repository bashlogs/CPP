#include<iostream>
using namespace std;
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
		  cout<<"\nIn destructor, destroying objects... ";
		 }

	 friend void avg(Student s);
	  void show()
	  {
	       cout<<" Roll: "<<roll<<"\n"<<"Marks: "<<m1<<" "<<m2<<"\n";
	  }
};
	  void avg(Student s)
	  {
		cout<<" Average marks are : "<<(s.m1+s.m2)/2;
	  }
	 int main()
	  {
		Student *sp,s1;//Creating two object it will go and print "In constructor , allocating memory
		sp= new Student();//thi is the new object
		s1= *sp; //s1 is equal to the sp
		sp->show();
		avg(s1);
		delete sp;
	  }
