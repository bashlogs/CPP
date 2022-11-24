//Practical no-6
//Title-Programto  to implement friend function

#include<iostream.h>
#include<conio.h>
 class sample
{
  int a;
  int b;
  public:
  void setvalue()
     {a=25;
      b=40;
     }
  friend float mean(sample s);
};
  float mean(sample s)
{
  return float(s.a+s.b)/2.0;
}
  int main()
{
  clrscr();
  sample x;
  x.setvalue();
  cout<<"Mean value="<<mean(x)<<"\n";
  getch();
  return 0;
}
