#include<conio.h>
#include<iostream.h>
void main()
{
int num,i,sum=0;
clrscr();
cout<<endl<<"enter a number"<<endl;
cin>>num;
for(i=1;i<=num;i++)
 {
   if(num%i==0)
   {
     sum=sum+i;
    }
 }
 if(num==sum/2)
 {
   cout<<endl<<"is parfect number="<<num;
 }
 else
 {
   cout<<endl<<"is not parfect number="<<num;
 }
 getch();
}
