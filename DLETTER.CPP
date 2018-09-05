#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int i,j,k;
 for(i=1;i<=8;i++)
 printf("*");
 printf("\n");
 for(j=1;j<=9;j++)
 {
  switch(j)
  {
   case 1 : printf("*");
	    break;
   case 9 : printf("*");
	    break;
   default: printf(" ");
	    break;
  }
 }
 printf("\n");
 for(k=1;k<=6;k++)
 {
  for(j=1;j<=10;j++)
  {
   switch(j)
   {
    case 1 : printf("*");
	     break;
    case 10: printf("*");
	     break;
    default: printf(" ");
	     break;
   }
  }
  printf("\n");
 }
 for(j=1;j<=9;j++)
 {
  switch(j)
  {
   case 1 : printf("*");
	    break;
   case 9 : printf("*");
	    break;
   default: printf(" ");
	    break;
  }
 }
 printf("\n");
 for(i=1;i<=8;i++)
 printf("*");
 printf("\n");
 getch();
}
