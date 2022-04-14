#include<iostream.h>
#include<conio.h>
class area
{
 int w,h;
 public:
 area(int w1=6,int h1=7)
 {
   w=w1;
   h=h1;
 }
 void cal()
 {
  int a;
  a=w*h;
  cout<<"\n area of circal="<<a;
  }
};
void main()
{
 area a1(2), a2(2);
 clrscr();
 a1.cal();
 a2.cal();
 getch();
}