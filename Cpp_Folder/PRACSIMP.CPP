#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 clrscr();
 float x,y,z,y0,yn,a,b,h,e,o,f;
 int i,n;
 printf("Enter the value of a : ");
 scanf(" %f",&a);
 printf("Enter the value of b : ");
 scanf(" %f",&b);
 printf("Enter the number of sub-intervals : ");
 scanf(" %d",&n);
 h = (b-a)/n;e=0;o=0;x=0;y=0;z=0;
 y0= 1/(1+a);
 yn= 1/(1+b);
 for(i=1;i<n;i++)
 {
  x = a + i*h;
  y = 1/(1+x);
  if(i%2==0)
   e+=y;
  else
   o+=y;
 }
 z = h*(y0 + 4*o + 2*e +yn)/3;
 printf("The integral value is : %f ",z);
 getch();
}