#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int i,j,k;
 for(i=1;i<=10;i++)
 printf("*");
 printf("\n");
 for(i=1;i<=5;i++)
 {
  for(j=1;j<10-i;j++)
  printf(" ");
  printf("*");
  printf("\n");
 }
 for(i=1;i<=4;i++)
 {
  for(j=1;j<6+i;j++)
  {
   if(i==1)
   printf(" ");
   else
   printf(" ");
  }
  printf("*");
  printf("\n");
 }
 for(i=1;i<=2;i++)
 {
  printf("*");
  for(j=1;j<10-i;j++)
  printf(" ");
  printf("*");
  printf("\n");
 }
 for(i=1;i<=4;i++)
 {
  if(i<2)
  printf(" ");
  else
  printf(" *");
 }
  getch();
}