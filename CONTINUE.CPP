#include<iostream.h>
#include<conio.h>
void main()
{
int num,i,sum=0;
clrscr();
for(i=1;i<=3;)
 {
   cout<<endl<<"enter a number"<<endl;
   cin>>num;
   if(num<0)
    {
      cout<<endl<<"negitive number not allowed="<<endl;
      continue;
     }
     sum=sum+num;
     i++;
  }
  cout<<endl<<"addtion of 3 number="<<sum;
  getch();
}