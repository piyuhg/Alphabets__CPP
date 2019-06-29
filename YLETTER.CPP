#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int i,j,k;
 for(i=1;i<=6;i++)
 {
  for(j=1;j<=i;j++)
  printf(" ");
  printf("*");
  for(k=1;k<12-2*i;k++)
  printf(" ");
  if(i==6)
  continue;
  printf("*");
  printf("\n");
 }
 printf("\n");
 for(i=1;i<=4;i++)
 {
  for(j=6;j>i;j--)
  printf(" ");
  printf("*");
  printf("\n");
 }
 getch();
}