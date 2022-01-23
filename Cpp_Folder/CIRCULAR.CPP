#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct stud{
	     int roll;
	     struct stud *next;
	    };
struct stud *head;
struct stud *temp= (struct stud*)(malloc(sizeof(struct stud)));
void insert_beg(int a)
{
 temp->roll = a;
 temp->next= NULL;
 if(head == NULL)
 {
  temp->next = head;
  head = temp;
  printf("1");
 }
 else
 {
  temp->next = head;
  head= temp;
 }
}
void print()
{
 temp= head;
 do{
  printf(" %d", temp->roll);
  temp = temp-> next;
 }while(temp!=head);
 printf("\n");
}
void delete_end()
{
 int i,n=0;
 struct stud *temp1 = head;
 do{
  n++;
  temp1= temp1->next;
 }while(temp1!=head);
 if(n==1)
 {
  head= temp1->next;
  free(temp1);
  printf("\n Empty List");
  return;
 }
 for(i=0;i<n-2;i++)
  temp1= temp1->next;
 struct stud *temp2 = temp1->next;
 struct stud *temp3 = temp2->next;
 temp1->next = temp3;
 free(temp2);
}

void main()
{
 clrscr();
 head = NULL;
 insert_beg(5);

 getch();
}


