/* wap to input two number and find LCM*/
#include<iostream.h>
#include<conio.h>


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
int lcm(int n1,int n2)
{
	 return n1*n2/gcd(n1,n2);
}




void main()
{
 int n1,n2,l,g;
int lcm(int a,int b);
 //int gcd(int ,int);
 clrscr();
 cout<<endl<<"enter two number"<<endl;
 cin>>n1>>n2;
 l=lcm(n1,n2);
// g=gcd(n1,n2);
 cout<<endl<<"lcm of"<<n1<<"and"<<n2<<"="<<l;
 //cout<<endl<<"gcd of"<<n1<<"and"<<n2<<"="<<g;
 getch();
}

