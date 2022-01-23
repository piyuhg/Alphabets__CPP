#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int i,j,k,s;
 for(i=1;i<=10;i++)
  {
   for(j=i;j<=10;j++)
    {
     printf(" ");
    }
    printf("*");
    for(k=i;k<=10;k++)
    {
     if(k==1)
     {
      for(s=1;s<12;s++)
      printf(" ");
      printf("*");
      for(j=1;j<=i;j++)
      {
       if(j==i)
       printf("*");
       else
       printf(" ");
      }
      for(k=10-i;k>0;k--)
      {
       if(k==1)
       printf("*");
       else
       printf(" ");
      }
      k=1;
      for(s=1;s<=2;s++)
      printf(" ");
      for(j=1;j<=10;j++)
      printf("*");
      printf("\n");
      break;
     }
     if(i==6)
     {
      for(j=1;j<k*2-1;j++)
       printf("*");
      for(s=1;s<7;s++)
       printf(" ");
       printf("*");
      for(j=1;j<=i;j++)
      {
       if(j==i)
       printf("*");
       else
       printf(" ");
      }
      for(k=10-i;k>0;k--)
      {
       if(k==1)
       printf("*");
       else
       printf(" ");
      }
      for(s=1;s<=2;s++)
      printf(" ");
      for(k=1;k<=4;k++)
      printf(" ");
      printf("*");
      printf("\n");
      break;
     }
    else
    {
     for(j=1;j<k*2-2;j++)
       {
	printf(" ");
       }
       printf("*");
       for(s=1;s<=12-i;s++)
       printf(" ");
       printf("*");
       for(j=1;j<=i;j++)
       {
	if(j==i)
	printf("*");
	else
	printf(" ");
       }
       for(k=10-i;k>0;k--)
       {
	if(k==1)
	printf("*");
	else
	printf(" ");
       }
       for(s=1;s<=2;s++)
       printf(" ");
       for(k=1;k<=4;k++)
       printf(" ");
       printf("*");
       printf("\n");
       break;
     }
    }
  }
 getch();
}