#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int i,j,k;
 for(i=1;i<9;i++)
 {
  if(i==1)
  printf(" ");
  printf("*");
 }
 printf("\n");
 for(j=1;j<=4;j++)
 {
  printf("*");
  if(j<2)
  {
   for(k=1;k<=9;k++)
   {
    switch(k)
    {
     case 9: printf("*");
	     break;
     default:printf(" ");
    }
   }
  }
  printf("\n");
 }
 for(i=1;i<=8;i++)
 {
  if(i==1)
  printf(" ");
  printf("*");
 }
 printf("\n");
 for(i=1;i<=3;i++)
 {
  if(i>2)
  printf("*");
  for(j=1;j<10;j++)
  {
   if(i>2)
    if(j==1)
    continue;
   printf(" ");
  }
  printf("*");
  printf("\n");
 }
 for(i=1;i<9;i++)
 {
  if(i==1)
  printf(" ");
  printf("*");
 }
 getch();
}