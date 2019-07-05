#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int i,j,k;
 for(i=1;i<=10;i++)
 {
  if(i==1||i==10)
  {
   for(j=1;j<=10;j++)
   {
    if(j<=2||j>=9)
    printf(" ");
    else
    printf("*");
   }
   printf("\n");
  }
  else if(i==2||i==9)
  {
   for(j=1;j<=10;j++)
   {
    if(j==2||j==9)
    printf("*");
    else
    printf(" ");
   }
   printf("\n");
  }
  else
  {
   for(j=1;j<=10;j++)
   {
    if(j==1||j==10)
    printf("*");
    else
    printf(" ");
   }
   printf("\n");
  }
 }
 getch();
}


