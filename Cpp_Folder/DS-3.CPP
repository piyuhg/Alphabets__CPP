#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[2][2],b[4],s,i,j,k;
 printf("Enter the size of square matrix\n");
 scanf(" %d",&s);
 printf("Enter %d values for matrix\n",s*s);
 for(i=0;i<s;i++)
  for(j=0;j<s;j++)
   scanf(" %d",&a[i][j]);
 printf("The 2-d matrix is as follows:\n");
 for(i=0;i<s;i++)
 {
  for(j=0;j<s;j++)
   printf(" %d",a[i][j]);
  printf("\n");
 }
 k=0;
 for(i=0;i<s;i++)
 {
  for(j=0;j<s;j++)
  {
   if(a[i][j]!=0)
   {
    b[k]=a[i][j];
    k++;
   }
  }
 }
 printf("\nThe non-zero elements of sparse matrix are :\n");
 for(i=0;i<k;i++)
  printf(" %d",b[i]);
 getch();
}
