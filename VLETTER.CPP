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
  for(k=1;k<=(19-2*i);k++)
  printf(" ");
  if(i==10)
  continue;
  printf("*");
  printf("\n");
 }
 getch();
}