#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int n,i,a=0,b=1,c;
 printf("Enter the limit");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  if(i<=1)
  c=i;
  else
  {
  c= a+b;
  a=b;
  b=c;
  }
  printf(" %d",c);
  }
getch();
}