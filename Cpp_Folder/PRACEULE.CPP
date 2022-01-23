#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 float x,y,f,h;
 int i,n;
 printf("Enter the value of x0 : ");
 scanf(" %f",&x);
 printf("Enter the value of y0 : ");
 scanf(" %f",&y);
 printf("Enter the value of n : ");
 scanf(" %d",&n);
 printf("Enter the value of h : ");
 scanf(" %f",&h);
 for(i=0;i<n;i++)
 {
  f = x + y;
  x = x + h;
  y = y + h*f;
 }
 printf("\n %f %f",x,f);
 printf("\nThe solution of ODE is : %f",y);
 getch();
}