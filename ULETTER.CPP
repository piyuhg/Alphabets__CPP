#include<conio.h>
#include<stdio.h>
void main()
{
 clrscr();
 int i,j,k;
 for(i=1;i<=8;i++)
 {
  printf("*");
  for(j=1;j<=8;j++)
  printf(" ");
  printf("*");
  printf("\n");
 }
 for(k=1;k<=10;k++)
 {
  if(k==2||k==9)
  printf("*");
  else
  printf(" ");
 }
 printf("\n");
 for(i=1;i<=10;i++)
 {
  if(i<=2||i>=9)
  printf(" ");
  else
  printf("*");
 }
 getch();
}


