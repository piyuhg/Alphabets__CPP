#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int i,j,k;
 for(i=1;i<=2;i++)
 {
  for(j=2;j>=i;j--)
  printf(" ");
  printf("*");
  if(i==1)
  for(k=1;k<=4;k++)
  {
   printf(" ");
   printf("*");
  }
  if(i==2)
  {
   for(k=1;k<=9;k++)
   printf(" ");
   printf("*");
  }
  printf("\n");
 }
 for(i=1;i<=12;i++)
 {
  if(i==12)
  printf("*");
  else
  printf(" ");
 }
 printf("\n");
 for(i=1;i<=6;i++)
 {
  for(j=i;j<=12;j++)
  {
   if(j==12-i)
   printf("*");
   else
   printf(" ");
  }
  printf("\n");
 }
 for(i=1;i<=12;i++)
 printf("*");
 getch();
}

