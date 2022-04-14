/*WAP TO input 3number and find largest number using nistid if else statiment*/
#include<iostream.h>
#include<conio.h>
void main()
{
 int n1,n2,n3;
 clrscr();
 cout<<endl<<"enter 3 number"<<endl;
 cin>>n1>>n2>>n3;
 if(n1>n2)
 {
   if(n1>n3)
   {
     cout<<endl<<"is largest number="<<n1;
   }
    else
     {
	cout<<endl<<"is largest number="<<n1;
     }
}
      else
	 {
	   cout<<endl<<"is largest number="<<n3;
	 }


       else
       {
	 if(n2>n3)
	  {
	    cout<<endl<<"is largest number="<<n2;
	   }
	   else
	    {
	      cout<<endl<<"is largest number="<<n3;
	    }
	 }

	   getch();
}
