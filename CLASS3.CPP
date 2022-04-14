/* create a class to input two number by input function by find add,sub
       mult,div in output function*/
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
void data::input()
{
 cout<<endl<<"enter two number"<<endl;
 cin>>num1>>num2;
}
 addition(int n1,int n2)
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
 float div(int n1,int n2)
{
 return float (n1)/n2;
}
void data:: output()
{
 cout<<endl<<"addtion="<<addition(num1,num2);
 cout<<endl<<"subtrction="<<sub(num1,num2);
 cout<<endl<<"multtiplication="<<mult(num1,num2);
 cout<<endl<<"division="<<div(num1,num2);
}
void main()
{
 data d1;
 clrscr();
 d1.input();
 d1.output();
 getch();
}