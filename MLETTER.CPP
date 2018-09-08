#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int i,j,k;
 for(i=1;i<=10;i++)
 {
  printf("*");
  for(j=1;j<=i;j++)
  printf(" ");
  printf("*");
  for(k=1;k<=(20-2*i);k++)
  printf(" ");
  printf("*");
  for(j=1;j<=i;j++)
  printf(" ");
  printf("*");
  printf("\n");
 }
 getch();
}