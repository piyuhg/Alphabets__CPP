#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int i,j,k;
 for(i=1;i<=5;i++)
 {
  for(j=1;j<=i;j++)
  printf(" ");
  printf("*");
  for(k=1;k<=(9-2*i);k++)
  printf(" ");
  if(i==5)
  continue;
  printf("*");
  printf("\n");
 }
 printf("\n");
 for(i=1;i<=5;i++)
 {
  for(j=5;j>i;j--)
  printf(" ");
  printf("*");
  for(k=5;k>=(7-2*i);k--)
  printf(" ");
  printf("*");
  printf("\n");
 }
 getch();
}