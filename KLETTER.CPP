#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int i,j,k;
 for(i=1;i<=11;i++)
 {
  printf("*");
  if(i<=6)
  {
   for(j=6;j>=i;j--)
   printf(" ");
   printf("*");
   printf("\n");
  }
  else
  {
   for(j=(i-5);j<=6;j++)
   {
    for(k=1;k<=j;k++)
    {
     printf(" ");
    }
    printf("*");
    printf("\n");
    break;
   }
  }
 }
 getch();
}

