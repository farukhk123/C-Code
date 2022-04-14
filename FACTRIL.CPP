/* wap t  factriol serios evin <2;+<4;+<6;+<5------n */
#include<iostream.h>
#include<conio.h>
void main()
{
 int n,sum=0,i,j;
 long f;
 clrscr();
 cout<<endl<<"enter a number do want serios"<<endl;
 cin>>n;
 for(i=1;i<=n;i++)
 {
   f=1;
 {
  for(j=2*i;j>=1;j--)
 {
   f=f*j;
 }
  sum=sum+f;
 }
cout<<endl<<"sum of serios"<<n<<"="<<sum;
}
getch();
}

