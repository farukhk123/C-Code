/* wap to create function using maltipal inheritiance */
#include<iostream.h>
#include<conio.h>
class a
{
 int num1;
 public:
 void input()
 {
  cout<<"\n Enter a number:\n";
  cin>>num1;
 }
 int get_n1()
 {
  return num1;
 }
};
class b
{
 int num2;
 public:
 void input()
 {
  cout<<"\n Enter a number:\n";
  cin>>num2;
 }
 int get_n2()
 {
  return num2;
 }
};
class c:public a,public b
{
 int sum;
 public:
 void display()
 {
  // a::display();
   sum=get_n1()+get_n2();
   cout<<"\n Addtion="<<sum;
 }
};
void main()
{
 clrscr();
 a abj1;
 b abj2;
 c abj3;
 abj1.input();
 abj2.input();
 abj3.display();
 getch();
}