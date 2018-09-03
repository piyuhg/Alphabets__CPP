#include<stdio.h>
#include<conio.h>
void main()
{clrscr();
 int i,j,k;
 for(i=1;i<=6;i++)
 {
  if(i==1)
  printf("  ");
  printf("*");
 }
 printf("\n");
 for(j=1;j<=10;j++)
 {
  if(j==1||j==10)
  {
   for(k=1;k<=10;k++)
   {
    switch(k)
    {
     case 2 : printf("*");
	      break;
     case 9 : printf("*");
	      break;
     default: printf(" ");
	      break;
    }
   }
   printf("\n");
  }
  else
  {
   printf("*");
   printf("\n");
  }
 }
 for(i=1;i<=6;i++)
 {
   if(i==1)
   printf("  ");
   printf("*");

 }
 getch();
}

