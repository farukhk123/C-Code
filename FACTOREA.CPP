#include<conio.h>
#include<iostream.h>
void main()
{
int i,f=1,num;
cout<<endl<<"enter number do you want factorial"<<endl;
cin>>num;
for(i=num;i>=1;i--)
 {
   f=f*i;
  }
  cout<<endl<<"factroil of"<<num<<"="<<f;
  getch();
}


