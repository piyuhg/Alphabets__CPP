#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int i,j,k;
 for(i=1;i<=4;i++)
 {
  for(j=i;j<5;j++)
  {
   printf(" ");
  }
  printf("*");
  for(k=1;k<i;k++)
  if(i==1)
  printf("");
  else
  printf(" ");
  printf("*");
  printf("\n");
 }
 for(i=1;i<=5;i++)
 {
  for(j=1;j<6;j++)
  printf(" ");
  printf("*");
  printf("\n");
 }
 for(i=1;i<=10;i++)
 printf("*");
 getch();
}




