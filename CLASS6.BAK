/* find armstong number using class function*/
#include<iostream.h>
#include<conio.h>
#include<math.h>
class arm
{
 int num,temp,d1,d2,d3,sum;
 public:
 void input(int a)
{
 num=a;
}
 int armst()
{
 temp=num;
 d1=temp%10;
 temp=temp/10;
 d2=temp%10;
 temp=temp/10;
 d3=temp%10;
 sum=pow(d1,3)+ pow(d2,3)+ pow(d3,3);
 if(sum==num)
 cout<<endl<<"is armstorng";
 else
 cout<<endl<<num<<"is not armstong";
 }
};
void main()
{
 arm a1;
 int num;
 clrscr();
 cout<<endl<<"enter a 3 digit number:"<<endl;
 cin>>num;
 a1.input(num);
 a1.armst();
 getch();
}
