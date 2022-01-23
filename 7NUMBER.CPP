#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int i,j,k;
 for(i=1;i<=10;i++)
 printf("*");
 printf("\n");
 for(i=1;i<=9;i++)
 {
  if(i==4)
  {
   for(j=1;j<=10;j++)
   {
    if(j<=2||j>=8)
    printf(" ");
    else
    printf("*");
   }
   printf("\n");
  }
  else
  {
   for(j=1;j<10-i;j++)
   printf(" ");
   printf("*");
   printf("\n");
  }
 }
 getch();
}