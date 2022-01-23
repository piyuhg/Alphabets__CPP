#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
float a,x,b,exp1;
printf("enter the value of a,x,b");
scanf("%f",&a);
scanf("%f",&x);
scanf("%f",&b);
exp1 = (a*x + b)/(a*x - b);
printf("%f",exp1);
getch();
}


