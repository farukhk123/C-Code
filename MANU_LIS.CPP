
/* wap input display rastorent manu list*/
#include<conio.h>
#include<iostream.h>
void main()
{
 int choice;
 clrscr();
 cout<<endl<<" manu list"<<endl;
 cout<<endl<<"1 fast food"<<endl;
 cout<<endl<<"2 cold dring"<<endl;
 cout<<endl<<"3 fruit"<<endl;
 cout<<endl<<"4 exit"<<endl;
 cout<<endl<<"enter you choice"<<endl;
 cin>>choice;
 switch (choice)
 {
  case 1:
  cout<<endl<<"list of fast food"<<endl;
  cout<<endl<<"maggi 1 plat(30 RS)"<<endl;
  cout<<endl<<"bargr 1 pes(50 RS)"<<endl;
  break;

  case 2:
  cout<<endl<<"list of colddring"<<endl;
  cout<<endl<<"papse 1 ltr(80 RS)"<<endl;
  cout<<endl<<" mrenda 1 ltr(85 RS)"<<endl;
  break;
  case 3:
  cout<<endl<<"list of fruit"<<endl;
  cout<<endl<<"apple 1 kg(100 RS)"<<endl;
  cout<<endl<<"mango 1 kg(80 RS)"<<endl;
  break;
  case 4:
  cout<<endl<<"good by"<<endl;
  break;
  default:
  cout<<endl<<"wrong choice"<<endl;
  }
  getch();
}

