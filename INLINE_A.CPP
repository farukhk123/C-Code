#include<iostream.h>
#include<conio.h>
inline int add(int a,int b)
{
 return a+b;
}
inline float div(int n1,int n2)
 {
  return n1/n2;
 }
 void main()
 {
  int c,d;
  clrscr();
  c=add(5,6);
  d=div(2,5);
  cout<<endl<<"addition="<<c;
  cout<<endl<<"division="<<d;
  getch();
 }