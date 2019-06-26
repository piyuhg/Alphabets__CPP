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
  for(k=1;k<=4;k++)
  printf(" ");
  printf("*");
  printf("\n");
 }
 getch();
}
