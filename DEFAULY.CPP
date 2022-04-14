/* wap to calculat area of box width heigth using default constructor*/

#include<conio.h>
#include<iostream.h>
class box
{
 private:
 int width,heigth;
 public:
 box()
{
 width=10;
 heigth=20;
}
void area()
{
 int a;
 a=width * heigth;
 cout<<"\n area of box="<<a;
 }
};
void main()
{
  clrscr();
 box b1,b2;
 b1.area();
 b2.area();
 getch();
}