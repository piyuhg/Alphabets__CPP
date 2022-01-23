#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *next;
};
struct node *head;
void insert_end(int a)
{
 struct node *temp= (struct node*)(malloc(sizeof(struct node)));
 temp->data = a;
 temp->next =  NULL;
 if(head==NULL)
  head = temp;
 else
 {
  struct node *temp1 = head;
  while(temp1->next!=NULL)
   temp1= temp1->next;
  temp1->next = temp;
 }
}
void print()
{
 struct node *temp1= head;
 while(temp1!= NULL)
 {
  printf("%d", temp1->data);
  temp1 = temp1-> next;
 }
}
void insert_beg( int a)
{
 struct node *temp= (struct node*)(malloc(sizeof(struct node)));
 temp->data= a;
 temp->next = NULL;
 if(head == NULL)
  head = temp;
 else
 {
  temp->next = head;
  head= temp;
 }
}
void delete_n(int n)
{
 int i;
 struct node *temp1 = head;
 if(n==1)
 {
  head= temp1->next;
  free(temp1);
  return;
 }
 for(i=0;i<n-2;i++)
  temp1= temp1->next;
 struct node *temp2 = temp1->next;
 struct node *temp3 = temp2->next;
 temp1->next = temp3;
 free(temp2);
}
void reverse()
{
 struct node *current= head, *prev= NULL, *nextt;
 while(current!= NULL)
 {
  nextt= current->next;
  current->next= prev;
  prev= current;
  current= nextt;
 }
 head= prev;
}
void main()
{
 clrscr();
 head= NULL;
 insert_end(6);
 print();
 printf("\n");
 insert_end(7);
 print();
 printf("\n");
 insert_beg(5);
 print();
 printf("\n");
 delete_n(1);
 print();
 printf("\n");
 reverse();
 print();
 getch();
}
