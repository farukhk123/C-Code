#include<iostream.h>
#include<conio.h>
#include<string.h>
class student
{
 int *rno;
 char *name;
 public:
 student(int rno1,char *name)
 void display()
};
student::student(int rno1, char *name)
{
 int len;
 len=strlen(name1);
 strcpy(name,name1);
 rno=new int;
 rno=rno1;
}
 void student::display()
 {
  cout<<"\n Roll="<<rno;
  cout<<"\n Name="<<name;
}
void main()
{
int r;
 char *n;
 cout<<"\n enter roll number and name\n";
 cin>>r>>n;
 student s1(r,n);
 s1.display();
 getch();
}
