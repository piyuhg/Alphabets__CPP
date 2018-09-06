#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int i,j,k;
 for(i=1;i<=10;i++)
 printf("*");
 printf("\n");
 for(j=1;j<=8;j++)
 {
  if(j<7)
  for(k=1;k<=6;k++)
  {
   if(k==6)
   printf("*");
   else
   printf(" ");
  }
  else
  for(k=1;k<=6;k++)
  {
   if(k==2||k==6)
   printf("*");
   else
   printf(" ");
  }
  printf("\n");
 }
 for(i=1;i<=4;i++)
 {
  if(i==4)
  printf("*");
  else
  printf(" ");
 }
 getch();
}



