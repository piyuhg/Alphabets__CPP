#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int i,j,k,s;
 for(i=1;i<=4;i++)
 {
  for(j=i;j<=4;j++)
  printf(" ");
  printf("*");
  for(k=1;k<i;k++)
  if(i==1)
  printf("");
  else
  printf(" ");
  printf("*");
  for(s=1;s<=6;s++)
  printf(" ");
  if(i==1)
  {
   for(j=1;j<=10;j++)
   {
    if(j<=2||j>=9)
    printf(" ");
    else
    printf("*");
   }
  }
  else if(i==2)
  {
   for(j=1;j<=10;j++)
   {
    if(j==2||j==9)
    printf("*");
    else
    printf(" ");
   }
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
  }
  printf("\n");
 }
 for(i=1;i<=5;i++)
 {
  for(j=1;j<6;j++)
  printf(" ");
  printf("*");
  for(s=1;s<=6;s++)
  printf(" ");
  if(i==5)
  {
   for(j=1;j<=10;j++)
   {
    if(j==2||j==9)
    printf("*");
    else
    printf(" ");
   }
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
  }
  printf("\n");
 }
 for(i=1;i<=10;i++)
 printf("*");
 for(s=1;s<=2;s++)
 printf(" ");
 for(j=1;j<=10;j++)
 {
  if(j<=2||j>=9)
  printf(" ");
  else
  printf("*");
 }
 getch();
}
