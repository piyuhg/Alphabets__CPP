#include<conio.h>
#include<stdio.h>
void main()
{
 clrscr();
 int a[5],i,beg, end, value,mid,s,flag=0;
 printf("Enter the size of array\n");
 scanf(" %d",&s);
 printf("Enter %d values for array\n",s);
 for(i=0;i<s;i++)
  scanf(" %d",&a[i]);
 printf("The array is as follow:\n");
 for(i=0;i<s;i++)
  printf(" %d",a[i]);
 printf("\n Enter the value to be sesrched\n");
 scanf(" %d",&value);
 beg = 0;
 end = s-1;
 for(i=0;i<s;i++)
 {
  mid=(beg+end)/2;
  if(a[mid]==value)
  {
   printf("The value %d is found at position %d",value,mid+1);
   flag=1;
   break;
  }
  else if(a[mid]<value)
   beg=mid+1;
  else
   end = mid-1;
 }
 if(flag==0)
  printf("The value is not there in array");
 getch();
}