#include<iostream.h>
#include<conio.h>
#include<string.h>
class student
{
 int *rno,len;
 char *name;
 public:
 student(int r,char *n)
 {
 cout<<"nnn"<<*n;
   rno=new int;
   *rno=r;
   len=strlen(n);
  name=new char[len+1];
   strcpy(name,"farukh");
 }
 void display()
 {
   cout<<"\n roll number'"<<*rno;
   cout<<"\n name="<<*name;
 }
  ~student()
 {
  delete rno;
  delete []name;
  cout<<"\n memory deallocated";
 }
};
void main()
{
 student s1(10,"farukh");
 clrscr();
 s1.display();
 getch();
}
