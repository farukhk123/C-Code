/* wap to input maltidiegeit number and find sum of its digit using while loop */
#include<iostream.h>
#include<conio.h>
void main()
{
 int num,sum=0;
 clrscr();
 cout<<endl<<"enter maltidiegit number"<<endl;
 cin>>num;
 while(num!=0)
 {
  sum=sum+num%10;
  num=num/10;
 }
  cout<<endl<<"sum="<<num;
  getch();
 }