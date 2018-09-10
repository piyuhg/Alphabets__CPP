#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int i,j,k;
 for(i=1;i<=9;i++)
 {
  if(i==1)
  printf(" ");
  else
  printf("*");
 }
 printf("\n");
 for(j=1;j<=8;j++)
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
 for(i=1;i<=9;i++)
 {
  if(i==1)
  printf(" ");
  else
  printf("*");
 }
 getch();
}