#include<conio.h>
#include<stdio.h>
void main()
{
 printf("\n \n \n");
 int i,j,k,n;
 printf(" Enter the order of spiral : ");
 scanf(" %d",&n);
 printf(" The spiral of %d order is : \n",n);
 for(i=n;i>=0;i--)
 {
  for(j=n*n;j>=n*n-n;j--)
   printf(" %d ",j);
  printf("\n")
 }
 getch();
}
