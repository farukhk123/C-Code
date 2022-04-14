/* find largest numbber using class function */
#include<iostream.h>
#include<conio.h>
class lrg
{
 int n1,n2;
 //private:
 public:
 void input()
{
 cout<<endl<<"enter tow number"<<endl;
 cin>>n1,n2;
}
 int large()
{
 if(n1>n2)
{
 return n1;
}
 else
 return n2;
 }
};
void main()
{
 lrg l1;
 clrscr();
 l1.input();
 cout<<endl<<"large="<<l1.large();
 getch();
}

