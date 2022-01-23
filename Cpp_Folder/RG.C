#include<stdio.h>
#include<math.h>
#include<conio.h>
float f(float x)
{return cos(x)-x*exp(x);}
void main()
{float a,b,x,y1,y6,y2,y3,y4,y5;
int n,i;
clrscr();
printf("\niter:");scanf("%d",&n);
printf("\nenter a n b:");scanf("%f%f",&a,&b);
//y1=f(a);
//y2=f(b);
y3=f(a)*f(b);
if(y3<0)
for(i=0;i<n;i++)
{y4=f(a);
y5=f(b);
x=(a*y5-b*y4)/(y5-y4);
y6=f(x);
if(y6<0) b=x;
else if (y6>0); a=x;
else break}
else printf("\nno root");
printf("\nroot =%f",x);
getch();
}

