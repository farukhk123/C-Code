/* wap to create multilave inheritance program*/
#include<iostream.h>
#include<conio.h>
class hospital
{
 private:
 int code;
 char name[25];
 public:
 void input()
{
 cout<<endl<<"\nEnter hospital code and name:";
 cin>>code>>name;
}
void display()
{
 cout<<"\n hospital code="<<code;
 cout<<"\n hospital nmae="<<name;
 }
};
class doctor:public hospital
{
 private:
 int id,fees;
 char name[25];
 float dca;
 public:
 void input()
{
 hospital::input();
 cout<<"\n Enter doctor id name and fees:";
 cin>>id>>name>>fees;
}
  float descount()
{
 return fees*10/100;
}
void display()
{
 hospital::display();
 cout<<"\n doctor id="<<id;
 cout<<"\n doctor name="<<name;
 cout<<"\n doctor fees="<<fees;
 cout<<"descount 10% of fees"<<descount();
 }
};
class patient:public doctor
{
 private:
 int p_id;
 char name[25];
 public:
 void input()
 {
  doctor::input();
  cout<<"\n Enter patient id and name:";
  cin>>p_id>>name;
 }
 void display()
{
 doctor::display();
 cout<<"\n patient id="<<p_id;
 cout<<"\n patient name="<<name;
 }
};
void main()
{
 patient p1;
 clrscr();
 p1.input();
 p1.display();
 getch();
}