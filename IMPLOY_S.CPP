/* wap to input basic salary a imploy and clulat
   Gross salary=hra+da+bs;
   Home reant allowmens=20% of basic salary;
   Daily allowmens=10% */

#include<iostream.h>
#include<conio.h>
void main()
{
  float bs,da,hra,gs;
  clrscr();
  cout<<endl<<"enter basic salary";
  cin>>bs;
  /* logic*/
  hra=bs*20/100;
  da=bs*10/100;
  gs=hra+bs+da;
  cout<<endl<<"basic salary="<<bs;
  cout<<endl<<"home rent allowment="<<hra;
  cout<<endl<<"daily allowment="<<da;
  cout<<endl<<"gross salary="<<gs;
  getch();
}
