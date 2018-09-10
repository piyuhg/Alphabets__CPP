#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int i,j,k;
 for(i=1;i<10;i++)
 printf("*");
 printf("\n");
 for(j=1;j<=4;j++)
 {
  for(k=1;k<=10;k++)
  {
   switch(k)
   {
    case 1 : printf("*");
	     break;
    case 10 : printf("*");
	     break;
    default : printf(" ");
	      break;
   }
  }
 printf("\n");
 }
 for(i=1;i<10;i++)
 printf("*");
 printf("\n");
 for(k=1;k<=4;k++)
 {
  printf("*");
  printf("\n");
  }
  getch();
 }

