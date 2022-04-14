#include<iostream.h>
#include<conio.h>
void main()
{
 int *p,i,n;
 clrscr();
 cout<<endl<<"enter how many elements do you want"<<endl;
 cin>>n;
 p=new int[n];
 for(i=0;i<n;i++)
 {
   cout<<"enter item"<<endl;
   cin>>p[i];
 }
 for(i=0;i<n;i++)
 {
  cout<<endl<<p[i];
 }
  delete[]p;
  getch();
}
