#include<iostream.h>
#include<conio.h>
class array
{
int *ia,sz;

public:
	  array(int size)
	  {
	  sz=size;
	  ia=new int[size];
	  }
	  void display();
	  void accept();
  };
  void array::accept()
  {
	cout<<"Enter "<<sz<<" integers\n";
	for(int k=0;k<sz;k++)
	cin>>ia[k];
  }
   void array::display()
  {
	cout<<"Entered "<<sz<<" integers are:\n";
	for(int k=0;k<sz;k++)
	cout<<ia[k]<<"\t";
  }
void main()
{
int s;
clrscr();
cout<<"enter the number of elements in array:\n";
cin>>s;
array a1(s);
a1.accept();
a1.display();
}
