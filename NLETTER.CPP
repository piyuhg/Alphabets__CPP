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
  {
   if(j==i)
   printf("*");
   else
   printf(" ");
  }
  for(k=10-i;k>0;k--)
   {
    if(k==1)
    printf("*");
    else
    printf(" ");
   }
  printf("\n");
 }
 getch();
}