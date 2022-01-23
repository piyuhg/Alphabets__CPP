#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int i,j,k;
 for(i=1;i<=8;i++)
 printf(" ");
 printf("*");
 printf("\n");
 for(i=1;i<=7;i++)
 {
  for(j=7;j>=i;j--)
  printf(" ");
  printf("*");
  for(k=1;k<=i-1;k++)
  {
   if(i==1)
   printf("");
   else
   printf(" ");
  }
  printf("*");
  printf("\n");
 }
 for(i=1;i<=11;i++)
 printf("*");
 printf("\n");
 for(i=1;i<=2;i++)
 {
  for(j=1;j<=10;j++)
  {
   if(j==9)
   printf("*");
   else
   printf(" ");
  }
  printf("\n");
 }
 getch();
}
