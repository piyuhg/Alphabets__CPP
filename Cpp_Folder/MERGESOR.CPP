#include<conio.h>
#include<stdio.h>
void mergesort(int a[],int, int);
void merge(int a[],int, int, int, int);
void main()
{
 int a[10], i,j;
 printf("Enter 10 elements for merge sort");
 for(i=0;i<10;i++)
  scanf(" %d",&a[i]);
 mergesort(a,0,9);
 for(j=0;j<10;j++)
  printf(" %d",a[j]);
 getch();
}
void mergesort(int a[], int i, int j)
{
 int mid;
 if(i<j)
 {
  mid=(i+j)/2;
  mergesort(a,i, mid);
  mergesort(a,mid+1,j);
  merge(a,i,mid, mid+1,j);
 }
}
void merge(int a[],int i1, int j1, int i2,int j2)
{
 int temp[10], i ,j,k;
 i=i1;
 j=i2;
 k=0;
 while((i<=j1)&&(j<=j2));
 {
  if(a[i]<a[j])
   temp[k++]= a[i++];
  else
   temp[k++]= a[j++];
 }
 while(i<=j1)
  temp[k++]=a[i++];
 while(j<=j2)
  temp[k++]=a[j++];
 for(i=i1;i<=j2;i++,j++)
  a[i]=temp[i];
}