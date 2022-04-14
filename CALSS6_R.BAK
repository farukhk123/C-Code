/* wap to input two number and swap(inter change) call by value*/
#include<iostream.h>
#include<conio.h>
class swp
{
int num;
public:
void input();
void swap(swp d);
void output();
};
void swp::input()
{
 cout<<endl<<"enter a number"<<endl;
 cin>>num;
}
void swp::swap(swp d)
{
 int temp;
 temp=num;
 num=d.num;
 d.num=temp;
}
void swp::output()
{
 cout<<endl<<num;
}
void main()
{
 swp d1,d2;
 clrscr();
 d1.input();
 d2.input();
 cout<<endl<<"befoure swapping";
 cout<<"first number=";
 d1.output();
 cout<<"secand number=";
 d2.output();
 d1.swap(d2);
 cout<<endl<<"after swapping";
 cout<<"first number=";
 d1.output();
 cout<<"secand number=";
 d2.output();
 getch();
}
