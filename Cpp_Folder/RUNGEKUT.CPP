#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 clrscr();
 float x0, y0, x, y, k1, k2, k3, k4,k, h;
 int n;
 x0=0;y0=1;h=0.2;x=x0;y=y0;
 for(n=1;n<=2;n++)
 {
  k1 = h*(pow(y,2)-pow(x,2))/(pow(y,2)+pow(x,2));
  k2 = h*(pow(y+(k1/2),2)-pow(x+(h/2),2))/(pow(y+(k1/2),2)+pow(x+(h/2),2));
  k3 = h*(pow(y+(k2/2),2)-pow(x+(h/2),2))/(pow(y+(k2/2),2)+pow(x+(h/2),2));
  k4 = h*(pow(y+k3,2)-pow(x+h,2))/(pow(y+k3,2)+pow(x+h,2));
  k  = (k1 +2*k2 + 2*k3 + k4)/6;
  x  = x + h;
  y  = y + k;
  printf("The value y at x = %f is : %f \n", x,y);
 }
 getch();
}
