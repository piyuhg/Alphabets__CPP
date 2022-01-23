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
 printf("\n");
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
 head = NULL;
 printf("Enter the value to be inserted");
 int item;
 scanf(" %d",&item);
 insert_end(item);
 print();
 int i,n,flag, inscase, loc;
 n=1;
 for(i=0;i<n;i++)
 {
  n++;
  printf("\n What do you want to do next?\n");
  printf("For insertion press 1, for deletion press 2, for reversal press 3");
  scanf("%d",&flag);
  switch(flag)
  {
   case 1: printf("For insertion at end press 1, at beginning press 2");
	   scanf("%d",&inscase);
	   switch(inscase)
	   {
	    case 1 : printf("Enter the value to be inserted");
		     scanf("%d",&item);
		     insert_end(item);
		     print();
		     break;
	    case 2 : printf("Enter the value to be inserted");
		     scanf("%d",&item);
		     insert_beg(item);
		     print();
		     break;
	    default :printf("Wrong input");
		     break;
	    }
	    break;
   case 2: printf("\nEnter the location where deletion to be done");
	   scanf("%d",&loc);
	   delete_n(loc);
	   print();
	   break;
   case 3: printf("The list after reversal is:\n");
	   reverse();
	   print();
	   break;
   default: printf("\nWrong input\n Thank You");
	    i= n+1;
	    break;
  }
 }
 getch();
}


