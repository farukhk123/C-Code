/* wap to input two number and find GCD*/
#include<iostream.h>
#include<conio.h>
void main()
{
 int n1,n2,g;
 int gcd(int a,int b);
 clrscr();
 cout<<endl<<"enter two number"<<endl;
 cin>>n1>>n2;
 g=gcd(n1,n2);
 cout<<endl<<"gct of"<<n1<<"and"<<n2<<"="<<g;
 getch();
}
 int gcd(int n1,int n2)
{
 int r;
 r=n1%n2;
 while(r!=0)
 {
  n1=n2;
  n2=r;
  r=n1%n2;
 }
 return n2;
}
