#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int i,j,k;
 for(i=1;i<=10;i++)
  {
   for(j=i;j<=10;j++)
    {
     printf(" ");
    }
    printf("*");
    for(k=i;k<=10;k++)
    {
     if(k==1)
     {
      printf("\n");
      break;
     }
     if(i==6)
     {
      for(j=1;j<k*2-1;j++)
       printf("*");
       printf("\n");
       break;
     }
      for(j=1;j<(k*2)-2;j++)
       {
	printf(" ");
       }
       printf("*");
       printf("\n");
       break;
    }
  }
 getch();
}