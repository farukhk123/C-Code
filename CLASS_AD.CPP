#include<iostream.h>
#include<conio.h>
class data
{
 private:
 int num1,num2;
 public:
 void input();
 void output();
};
void data:: input()
{
  cout<<"\n Enter two number:";
  cin>>num1>>num2;
}
add(int n1,int n2)
{
 return n1+n2;
}

sub(int n1,int n2)
{
 return n1-n2;
}

mult(int n1,int n2)
{
  return n1*n2;
}

float dev(int n1,int n2)
{
  return (float) n1/n2;
}
void data:: output()
{
 cout<<"\n Addition="<<add(num1,num2);
 cout<<"\n Subtraction="<<sub(num1,num2);
 cout<<"\n Multpliction="<<mult(num1,num2);
 cout<<"\n Devction="<<dev(num1,num2);
}
void main()
{
 data d1;
 clrscr();
 d1.input();
 d1.output();
 getch();
}




