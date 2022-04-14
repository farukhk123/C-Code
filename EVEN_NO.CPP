/*wap to sum up evin number 2+4+6------n*/
#include<iostream.h>
#include<conio.h>
void main()
{
 int sum=0,n,i;
 clrscr();
 cout<<endl<<"enter a number do you want sum up"<<endl;
 cin>>n;
 for(i=2;i<=n;i++)
 {
 sum=sum+2*i;
 }
 cout<<endl<<"sum up"<<n<<"="<<sum;
 getch();
 }