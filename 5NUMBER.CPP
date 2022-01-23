#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int i,j,k;
 for(i=1;i<=10;i++)
 printf("*");
 printf("\n");
 for(i=1;i<=4;i++)
 {
  printf("*");
  if(i==4)
  for(j=1;j<=3;j++)
  printf(" *");
  printf("\n");
 }
 for(i=1;i<=3;i++)
 {
  for(j=1;j<=i+6;j++)
  printf(" ");
  printf("*");
  printf("\n");
 }
 for(i=1;i<=8;i++)
 printf(" ");
 printf("*");
 printf("\n");
 printf("*");
 for(j=1;j<=5;j++)
 printf(" ");
 printf("*");
 printf("\n");
 printf(" *");
 for(j=1;j<=3;j++)
 printf("*");
 getch();
}
