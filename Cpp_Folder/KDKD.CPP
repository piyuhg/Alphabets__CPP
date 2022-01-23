#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int i, j, n=1;
 for(i=1;i<=5;i++)
 {
  for(j=1;j<=i;j++)
  {
   printf(" %d",n);
   n--;
  }
  n++;
  n= n 	+ i*2 ;
  printf("\n");
 }
 getch();
}