#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int i,j,k;
 for(i=1;i<=10;i++)
 {
  if(i==1||i==10)
   printf(" ");
   else
   printf("*");
 }
 printf("\n");
 for(i=1;i<=4;i++)
 {
  printf("*");
  for(j=1;j<=8;j++)
  printf(" ");
  printf("*");
  printf("\n");
 }
 for(i=1;i<=10;i++)
 {
  if(i==1||i==10)
  printf(" ");
  else
  printf("*");
 }
 printf("\n");
 for(i=1;i<=5;i++)
 {
  if(i<4)
  {
   for(j=1;j<=9;j++)
    printf(" ");
    printf("*");
    printf("\n");
  }
  else if(i==4)
  {
   printf("*");
   for(j=1;j<=8;j++)
   printf(" ");
   printf("*");
   printf("\n");
  }
  else
  for(j=1;j<=9;j++)
  if(j==1)
  printf(" ");
  else
  printf("*");
 }
 getch();
}