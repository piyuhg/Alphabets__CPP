#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 clrscr();
 float x,y,z,a,b,y0,yn,e,o,h;
 int i,n;
 printf("Enter the value of a : ");
 scanf(" %f",&a);
 printf("Enter the value of b : ");
 scanf(" %f",&b);
 printf("Enter the number of sub-interavls : ");
 scanf(" %d",&n);
 h = (b-a)/n;x=0;y=0;e=0;o=0;z=0;
 y0= 1/(1+a);
 yn= 1/(1+b);
 for(i=1;i<n;i++)
 {
  x = a + i*h;
  y = 1/(1+x);
  if(i%3==0)
   o+=y;
  else
   e+=y;
 }
 z = 3*h*(y0 + 2*o +3*e + yn)/8;
 printf("The value of Integral is : %f",z);
 getch();
}