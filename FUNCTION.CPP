/* wap to create a class and oprection multiplction 3 class*/
#include<iostream.h>
#include<conio.h>
class multi
{
 public:
 int mul(int a, int b)
 {
   return a*b;
 }
 int mul(int n1, int n2, int n3)
 {
   return n1*n2*n3;
 }
 float mul(int l1,float l2)
 {
   return l1*l2;
 }
};
 void main()
 {
   multi d;
   cout<<"\n enter number";
   cout<<"\n multpliction="<<d.mul(10,20);
   cout<<"\n multpliction="<<d.mul(10,20,30);
   cout<<"\n mulction="<<d.mul(8,9.6f);
   getch();
 }

