#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int i,j,k;
 for(i=1;i<=10;i++)
 {
  for(j=1;j<=i;j++)
  printf(" ");
  printf("*");
  for(k=1;k<20-2*i;k++)
  printf(" ");
  if(i==10)
  printf("");
  else
  printf("*");
  for(j=1;j<=2*i-3;j++)
  printf(" ");
  if(i==1)
  printf("");
  else
  printf("*");
  for(k=1;k<20-2*i;k++)
  printf(" ");
  if(i==10)
  printf("");
  else
  printf("*");
  printf("\n");
 }
 getch();
}