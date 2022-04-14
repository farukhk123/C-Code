#include<conio.h>
#include<iostream.h>
void main()
{
// int ad,a,b;
 int n1,n2,ad;
 int add(int,int);
 clrscr();
 cout<<"enter two number"<<endl;
 cin>>n1>>n2;
 ad=add(n1,n2);
 cout<<endl<<"addition of"<<n1<<"and"<<n2<<"="<<ad;
 ad=add(8,7);
 cout<<endl<<"addtion="<<ad;
 getch();
}
 int add(int b1,int b2)
 {
  return b1+b2;
}
