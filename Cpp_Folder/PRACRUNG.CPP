#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 clrscr();
 float x,y,h,k1,k2,k3,k4,k;
 int i,n;
 printf("Enter the value of x0 : ");
 scanf(" %f",&x);
 printf("Enter the value of y0 : ");
 scanf(" %f",&y);
 printf("Enter the value of h : ");
 scanf(" %f",&h);
 printf("Enter the value of n : ");
 scanf(" %d",&n);
 printf(" x %f y %f h %f n %d\n",x,y,h,n);
 k=0;k1=0;k2=0;k3=0;k4=0;
 for(i=0;i<n;i++)
 {
  k1 = h*(y-x);

  k2 = h*((y+k1/2)-(x+h/2));

  k3 = h*((y+k2/2)-(x+h/2));

  k4 = h*(y+k3 - (x+h));

  k  = (k1 + 2*k2+ 2*k3 + k4)/6;
  y  = y + k;
  x  = x + h;
  printf("k1 %f k2 %f k3 %f k4 %f\n",k1,k2,k3,k4);
 }
 printf(" h %f x %f k %f \n",h,x,k);
 printf("The solution of ODE is : %f",y);
 getch();
}