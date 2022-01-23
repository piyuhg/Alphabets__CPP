#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
struct stud{
		int roll;
		struct stud *next;
	   };
struct stud *front;
void ins_beg(int a)
{
 struct stud *temp1= (struct stud*)malloc(sizeof(struct stud));
 struct stud *temp2= (struct stud*)malloc(sizeof(struct stud));
 temp1->roll= a;
 temp1->next= NULL;
 if(front==NULL)
  front = temp1;
 else
 {
  temp2=front;
  temp1->next=temp2;
  front=temp1;
 }
}
void ins_any(int a,int loc)
{
 int i;
 struct stud *temp;
 struct stud *temp1 = (struct stud*)malloc(sizeof(struct stud));
 struct stud *temp2 = (struct stud*)malloc(sizeof(struct stud));
 temp= front;
 for(i=1;i<loc;i++)
  temp=temp->next;
 temp1=temp;
 temp2->roll= a;
 temp2->next= temp1->next;
 temp1->next= temp2;
}
void ins_end(int a)
{
 struct stud *temp1 = (struct stud*)malloc(sizeof(struct stud));
 temp1->roll=a;
 temp1->next=NULL;
 struct stud *temp;
 temp = front;
 if(temp==NULL)
  front=temp1;
 else
 {
  temp= front;
  while(temp->next!=NULL)
   {
    temp=temp->next;
   }
  temp->next= temp1;
 }
}
void print()
{
 struct stud *temp;
 temp = front;
 while(temp!=NULL)
 {
  printf(" %d",temp->roll);
  temp =temp->next;
 }
 printf("\n");
}
void del(int a)
{
 struct stud *temp,*tempp;
 temp = front;
 tempp= NULL;
 while(temp!=NULL && temp->roll!=a)
  {
   tempp = temp;
   temp=temp->next;
  }
 if(temp->roll==a)
 {
  tempp->next= temp->next;
  temp->next=NULL;
 }
 else
  printf("\nValue not in the list\n");
}
void rev()
{
 struct stud *temp= front;
 int n=0, i;
 while(temp!=NULL)
 {
  temp= temp->next;
  n++;
 }
 temp = front;
 for(i=1;i<=n;i++)
 {
  if(i==n)
  {
   printf(" %d", temp->roll);
   temp=front;
   n--;
   i=0;
  }
  else
  temp= temp->next;
 }
}
void main()
{
 clrscr();
 front = NULL;
 ins_beg(5);
 print();
 ins_end(1);
 print();
 ins_any(2,1);
 print();
 ins_any(3,2);
 print();
 del(2);
 print();
 ins_any(4,2);
 print();
 ins_beg(6);
 print();
 ins_end(9);
 print();
 rev();
 getch();
}
