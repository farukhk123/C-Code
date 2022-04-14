/* wap to input a number and find factrial of this number using recasive function*/

#include<iostream.h>
#include<conio.h>
void main()
{
 int  num,f;
 int fact(int);
 clrscr();
 cout<<endl<<"enter a number"<<endl;
 cin>>num;
 f=fact(num);
 cout<<endl<<"factrial of"<<num<<"="<<f;
 getch();
 }
  int fact(int n)
  {
  if(n==0||n==1)
  return 1;
  else
  return n*fact(n-1);
 }

