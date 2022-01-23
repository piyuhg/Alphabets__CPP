#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 clrscr();
 float a,b,h,x,f,fa,fb;
 int i,n;
 printf("Enter the value of a:\n");
 scanf(" %f",&a);
 printf("Enter the value of b:\n");
 scanf(" %f",&b);
 fa = pow(a,3)-a-1;
 fb = pow(b,3)-b-1;
 printf("f(a)= %f\n",fa);
 printf("f(b)= %f\n",fb);
 if(fa*fb<0)
 {
  if(fb<0)
  {
   h=a;
   a=b;
   b=h;
  }
  printf("Enter the number of iterations: \n");
  scanf(" %d",&n);
  for(i=0;i<n;i++)
  {
   fa = pow(a,3)-a-1;
   fb = pow(b,3)-b-1;
   x  = a - (b-a)*fa/(fb-fa) ;
   f  = pow(x,3)-x-1;
   if(f>0)
    b = x;
   else
    a = x;
  }
  printf(" The root of the equation is: %f ",x);
 }
 else
  printf("No root exists between given interval");
 getch();
}