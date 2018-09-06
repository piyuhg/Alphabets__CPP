#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int i,j,k;
 for(i=1;i<=10;i++)
 printf("*");
 printf("\n");
 for(j=1;j<=2;j++)
 {
  for(k=1;k<=10;k++)
  {
   switch(k)
   {
    case 1 : printf("*");
	     break;
    case 10: printf("*");
	     break;
    default: printf(" ");
   }
  }
  printf("\n");
 }

 for(j=1;j<=3;j++)
 {
  printf("*");
  printf("\n");
 }
 for(k=1;k<=4;k++)
 {
  if(k==1)
  {
   for(j=1;j<=15;j++)
   {
    if(j>1&&j<10)
    printf(" ");
    else
    printf("*");
   }
   printf("\n");
  }
  for(j=1;j<=15;j++)
  switch(j)
  {
   case 1 : printf("*");
	    break;
   case 10 : printf("*");
	    break;
   case 15: printf("*");
	    break;
   default: printf(" ");
  }
  printf("\n");
  if(k==4)
  {
   for(j=1;j<=15;j++)
   {
    if(j>=1&&j<10)
    printf("*");
    else if(j==15)
    printf("*");
    else
    printf(" ");
   }
  }
 }
 getch();
}