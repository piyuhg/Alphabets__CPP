#include<conio.h>
#include<stdio.h>
void main()
{
 clrscr();
 int a[5],i,j,value, s;
 printf("Enter the size of array");
 scanf("%d",&s);
 printf("Enter %d values for array\n",s);
 for(i=0;i<s;i++)
  scanf(" %d",&a[i]);
 printf("The array is as follows;");
 for(i=0;i<s;i++)
  printf(" %d",a[i]);
 printf("\nEnter the value to be searched\n");
 scanf(" %d",&value);
 int flag=0;
 for(i=0;i<s;i++)
 {
  if(a[i]==value)
  {
   printf("The value %d is found at position %d",value,i+1);
   flag=1;
   break;
  }
 }
 if(flag==0)
  printf("The value is not there in array");
 getch();
}