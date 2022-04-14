/* wap to input 3 number and find largest number using ricrging function*/
#include<iostream.h>
#include<conio.h>
void main()
{
 int n1,n2,n3,l;
 int large(int,int);
 clrscr();
 cout<<endl<<"enter 3 number"<<endl;
 cin>>n1>>n2>>n3;
 l=large(n1,large(n2,n3));
 coit<<endl<<"is l;arge"<<l;
 getch();
}
 int large(int n1,int n2)
 {
  if(n1>n2)
  return n1;
  else
  return n2;
 }