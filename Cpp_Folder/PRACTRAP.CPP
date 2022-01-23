#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 clrscr();
 float x,y,a,b,f,fa,fb,h;
 int n,i;
 printf("Enter the value of a\n");
 scanf(" %f",&a);
 printf("Enter the value of b\n");
 scanf(" %f",&b);
 printf("Enter the number of sub-intervals\n");
 scanf(" %d",&n);
 fa = 1/(1+a);
 fb = 1/(1+b);
 h  = (b-a)/n;
 f  = h*(fa + fb)/2;
 for(i=1;i<n;i++)
 {
  x = a + i*h;
  y = 1/(1+x);
  f = f + y*h;
 }
 printf("\nThe value of integral is: %f",f);
 getch();
}