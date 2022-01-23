#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int i,j,k;
 for(i=1;i<=10;i++)
 {
  if(i==1||i==10)
  printf(" ");
  else
  printf("*");
 }
 printf("\n");
 for(i=1;i<=10;i++)
 {
  if(i==1||i==10)
  printf("*");
  else
  printf(" ");
 }
 printf("\n");
 for(i=1;i<=8;i++)
 {
  if(i<=3)
  {
   printf("*");
   printf("\n");
  }
  if(i==4)
  {
   for(j=1;j<=10;j++)
   {
    if(j==1||j==10)
    printf(" ");
    else
    printf("*");
   }
   printf("\n");
  }

  if(i>=5)
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
 for(i=1;i<=10;i++)
 {
  if(i==1||i==10)
  printf(" ");
  else
  printf("*");
 }
 getch();
}