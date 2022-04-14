/* wap to input number of days and find out how many monthand date*/
#include<iostream.h>
#include<conio.h>
void main()
{
int n,m,d;
clrscr();
cout<<endl<<"enter number of day"<<endl;
cin>>n;
m=n/30;
d=n%30;
cout<<endl<<"month="<<m;
cout<<endl<<"day="<<d;
getch();
}