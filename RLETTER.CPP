#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int i,j,k;
 for(i=1;i<8;i++)
 {
  if(i==1)
  printf(" ");
  printf("*");
 }
 printf("\n");
 for(j=1;j<=4;j++)
 {
  for(k=1;k<=9;k++)
  {
   switch(k)
   {
    case 1 : printf("*");
	     break;
    case 9 : printf("*");
	     break;
    default : printf(" ");
	      break;
   }
  }
 printf("\n");
 }
 for(i=1;i<8;i++)
 {
  if(i==2)
  printf(" ");
  printf("*");
 }
 printf("\n");
 for(k=1;k<=6;k++)
 {
  printf("*");
  for(j=1;j<=k;j++)
  {
   if(j==1)
   printf(" ");
   printf(" ");
  }
  printf("*");
  printf("\n");
  }
  getch();
 }
