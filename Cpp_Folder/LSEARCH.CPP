#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[6];
 int i,flag,size,item;
 printf("Enter the Size of Array\n");
 scanf("%d",&size);
 printf("Enter the values of array\n");
 for(i=0;i<size;i++)
  scanf("%d",&a[i]);
 printf("Enter Item to be searched");
 scanf("%d",&item);
 for(i=0;i<size;i++)
 {
  if(item==a[i])
  {
   printf("Enter Item found at position %d",i+1);
   flag= 1;
   break;
  }
  else
  flag=0;
 }
 if(flag==0)
 printf("Item not found");
 getch();
}
