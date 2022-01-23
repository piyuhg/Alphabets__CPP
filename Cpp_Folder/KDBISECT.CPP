#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 clrscr();
 int i,n;
 float a,b,t,fa, x,fb,f;
 printf("\n Enter the interval a and b\n");
 scanf("  %f",&a);
 scanf("  %f",&b);
 printf("Enter the number of iterations\n");
 scanf(" %d",&n);
 printf("The values entered for interval is ( %f,%f)",a,b);
 fa = pow(a,3)-a-1;
 printf("\n f(%f)= %f ",a,fa);
 fb = pow(b,3)-b-1;
 printf("\n f(%f)= %f ",b,fb);
 if(fa*fb<0)
 {
  if(fb<0)
  {
   t=a;
   a=b;
   b=t;
  }
  for(i=0;i<=n;i++)
  {
  x =(a+b)/2;
  f =pow(x,3)-x-1;
  if(f>0)
   b=x;
  if(f<0)
   a=x;
  }
  printf("\nThe approximate root of the equation is : %f",x);
 }
 else
 printf("\n No root exists between %f and %f",a,b);

 getch();
}