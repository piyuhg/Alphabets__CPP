#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int i,j,k;
 for(i=1;i<=10;i++)
 {
  if(i==6)
  {
   for(j=1;j<=10;j++)
   printf("*");
   printf("\n");
  }
  else
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
     }
    }
    printf("\n");
   }
  }
 getch();
}
