#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int A[2][2], B[4], n,i,j,k,l;
 printf("Enter the size of 2-d Array\n");
 scanf("%d",&n);
 printf("Enter %d values of Matrix\n",n*n);
 for(i=0;i<n;i++)
  for(j=0;j<n;j++)
  scanf("%d",&A[i][j]);
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
   printf(" %d",A[i][j]);
  printf("\n");
 }
 k=0;
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   if(A[i][j]!=0)
   {
    B[k] = A[i][j];
    k++;
   }
  }
 }
 printf("The elements of Sparse Matrix are:\n");
 for(l=0;l<k;l++)
  printf(" %d",B[l]);
 getch();
}
