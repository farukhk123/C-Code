/* Binary oprator overloding by friend function */

#include<iostream.h>
#include<conio.h>
class test
{
  int a,b;
  public:
  test()
  {
    a=0;
    b=0;
  }
  test(int x, int y)
  {
    a=x;
    b=y;
  }
  void display()
  {
    cout<<"\n value of A="<<a;
    cout<<"\n value of B="<<b;
  }
  friend test operator +(test t1,test t2);
};
 test operator +(test t1,test t2)
 {
    test t3;
    t3.a=t1.a+ t2.a;
    t3.b=t1.b+ t2.b;
    return t3;
 }
 void main()
 {
   clrscr();
   test t1(10,20),t2(30,40),t3;
   cout<<"\n 1st object value";
   t1.display();
   cout<<"\n 2st object value";
   t2.display();
   t3=t1+t2;
   cout<<"\n Addition of two object \n";
   t3.display();
   getch();
 }


