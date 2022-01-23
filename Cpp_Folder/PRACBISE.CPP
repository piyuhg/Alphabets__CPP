#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{
 clrscr();
 int i,n;
 float x,a,b,h,f,fa,fb;
 printf("Enter the intial value of interval\n");
 scanf(" %f",&a);
 printf("Enter the end value of interval\n");
 scanf(" %f",&b);
 printf("The interval is ( %f, %f).",a,b);
 fa = pow(a,3)-a-1;
 fb = pow(b,3)-b-1;
 printf("\nf(%f)= %f",a,fa);
 printf("\nf(%f)= %f",b,fb);
 if(fa*fb<0)
 {
  if(fb<0)
  {
   h=a;
   a=b;
   b=h;
  }
  printf("\nEnter the number of iterations :" );
  scanf("%d",&n);
  for(i=0;i<=n;i++)
  {
   x = (a+b)/2;
   f = pow(x,3)-x-1;
   if(f<0)
    a = x;
   if(f>0)
    b = x;
  }
  printf("The root of the equation is: %f",x);
 }
 else
  printf("\nNo root exists in interval (%f,%f).",a,b);
 getch();
}