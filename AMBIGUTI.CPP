/* wap to find error using ambiguity error */
#include<iostream.h>
#include<conio.h>
class alpa
{
 public:
 void display()
 {
  cout<<"\n Alpa class";
 }
};
class beta
{
 public:
 void display()
 {
  cout<<"\n Beta class";
 }
};
class Gamma:public alpa,public beta
{
 public:
 void display()
 {
 alpa::display();
 beta::display();

 // int x;
 }
};
void main()
{
 clrscr();
 Gamma g;
 g.display();
 getch();
}

