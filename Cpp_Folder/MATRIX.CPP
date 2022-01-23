#include<conio.h>
#include<stdio.h>
void main()
{clrscr();
 int i,j;
 int a[2][2], b[2][2], c[2][2];
 printf("Enter th values for matrix A");
 for(i=0;i<2;i++)
  {
   for(j=0;j<2;j++)
   {
    scanf("%d",&a[i][j]);
   }
  }
 for(i=0;i<2;i++)
  {
   for(j=0;j<2;j++)
   {
    printf("  %d",a[i][j]);
   }
  printf("\n");
  }
 printf("\n");
 for(i=0;i<2;i++)
  {
   for(j=0;j<2;j++)
   {
    scanf("%d",&b[i][j]);
   }
  }
 for(i=0;i<2;i++)
  {
   for(j=0;j<2;j++)
   {
    printf("  %d",b[i][j]);
   }
  printf("\n");
  }
  /* addition*/
  {
   printf("The addtion matrix of A and B is \n");
   for(i=0;i<2;i++)
   {
    for(j=0;j<2;j++)
     {
      c[i][j] = a[i][j] + b[i][j];
      printf("  %d",c[i][j]);
     }
    printf("\n");
    }
   }
   /*subtraction*/
  {
   printf("The subtraction matrix of A and B is \n");
   for(i=0;i<2;i++)
   {
    for(j=0;j<2;j++)
     {
      c[i][j] = -a[i][j] + b[i][j];
      printf("  %d",c[i][j]);
     }
    printf("\n");
    }
   }
  /*transpose*/
  {
   printf("The transpose of matrix A is \n");
   for(i=0;i<2;i++)
   {
    for(j=0;j<2;j++)
     {
      c[i][j] = a[j][i];
      printf("  %d",c[i][j]);
     }
    printf("\n");
    }
   }
  /*multiplication*/
  {
   int k;
   printf("The multipication product of A and B is \n");
   for(i=0;i<2;i++)
   {
    for(j=0;j<2;j++)
    {
     c[i][j]= 0;
     for(k=0;k<2;k++)
     {
      c[i][j]= c[i][j] + a[i][k]*b[k][j];
     }
     printf("  %d",c[i][j]);
    }
    printf("\n");
   }
  }
  getch();
 }
