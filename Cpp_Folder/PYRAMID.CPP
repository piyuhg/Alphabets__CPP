#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int a,i,j,num;
 printf("Enter a number \n");
 scanf("%d",&num);
 clrscr();
 for(i= num;i>=1;i--)
 {
  for(a=i;a>1;a--)
   printf(" ");
  for(j=num;j>=i;j--)
  {
   printf("*");
   printf(" ");
  }
  printf("\n");
 }
 for(i= num-1;i>=1;i--)
 {
  for(a=num-1;a>=i;a--)
   printf(" ");
  for(j=1;j<=i;j++)
  {
   printf("*");
   printf(" ");
  }
  printf("\n");
 }
 getch();
}