#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int i,j,k;
 for(i=1;i<=8;i++)
 {if(i==1)
  printf(" ");
  printf("*");
 }
 printf("\n");
 for(j=1;j<=7;j++)
 {
  if(j<=5)
  {
   for(k=1;k<=10;k++)
   {
    switch(k)
    {
     case 1:  printf("*");
	      break;
     case 10: printf("*");
	      break;
     default: printf(" ");
	      break;
    }
   }
  }
   else if(j==6)
  {
   for(k=1;k<=10;k++)
   {
    switch(k)
    {
     case 1:  printf("*");
	      break;
     case 8:  printf("*");
	      break;
     case 10: printf("*");
	      break;
     default: printf(" ");
	      break;
    }
   }
  }
  else
  {
   for(k=1;k<=10;k++)
   {
    switch(k)
    {
     case 1:  printf("*");
	      break;
     case 9:  printf("*");
	      break;
     case 10: printf("*");
	      break;
     default: printf(" ");
	      break;
    }
   }
  }
  printf("\n");
 }
 for(i=1;i<=9;i++)
 {
  if(i==1)
  printf(" ");
  printf("*");
 }
 printf("\n");
 for(i=1;i<=11;i++)
 {
  if(i==11)
  printf("*");
  else
  printf(" ");
 }
 printf("\n");
 for(i=1;i<=12;i++)
 {
  if(i==12)
  printf("*");
  else
  printf(" ");
 }
 printf("\n");
 getch();
}