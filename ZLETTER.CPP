#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int i,j,k;
 for(i=1;i<=10;i++)
 printf("*");
 printf("\n");
 for(j=1;j<=9;j++)
 {
  for(k=9;k>j;k--)
  printf(" ");
  printf("*");
  if(j==9)
  break;
  printf("\n");
 }
 for(i=1;i<=10;i++)
 printf("*");
 getch();
}
