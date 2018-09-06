#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int i,j,k;
 for(i=1;i<=10;i++)
 printf("*");
 printf("\n");
 for(j=1;j<=8;j++)
 {
  for(k=1;k<=10;k++)
  {
   if(k==5)
   printf("*");
   else
   printf(" ");
  }
  printf("\n");
 }
 for(i=1;i<=10;i++)
 printf("*");
 getch();
 }
