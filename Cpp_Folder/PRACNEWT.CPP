#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{
 clrscr();
 float a,b,x,f,f1,h,fa,fb;
 int i,n;
 printf("Enter the value of a\n");
 scanf(" %f",&a);
 printf("Enter the value of b\n");
 scanf(" %f",&b);
 fa = pow(a,3)-a-1;
 fb = pow(b,3)-b-1;
 printf("f(%f)= %f\n",a,fa);
 printf("f(%f)= %f\n",b,fb);
 if(fa*fb<0)
 {
  x = (a+b)/2;
  printf("Enter the number of iterations : \n");
  scanf(" %d",&n);
  for(i=1;i<=n;i++)
  {
   f  = pow(x,3)-x-1;
   f1 = 3*pow(x,2)-1;
   h  = -f/f1;
   x  = x+h;
  }
  printf("The  root of the equation is: %f",x);
 }
 else
  printf("No root exist between given interval!!");
 getch();
}