#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a, i,j ;
for(a= 2;a<=100;a++)
{j = 0;
 for(i=2;i<a;i++)
 {
  if(a%i==0)
  {
   j= 1;
   break;
  }
 }
 if(j==0)
 {
 printf("\n %d",a);
 }
}
getch();
}
