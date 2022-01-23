#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 clrscr;
 float f,a,b,x;
 int i;
 a= 1;
 b= 2;
 for(i=0;i<=10;i++)
 {
  x= (a+b)/2;
  f = pow(x,3)-x-1;
  if(f<0)
  a=x;
  if(f>0)
  b=x;
 }
 printf(" The root is  %f",x);
 getch();
}
