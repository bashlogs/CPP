#include<iostream>
using namespace std;
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
int main()
{
int s;
cout<<"enter the number of elements in array:\n";
cin>>s;
array a1(s);
a1.accept();
a1.display();
return 0;
}
