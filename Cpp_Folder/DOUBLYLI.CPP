#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct stud{
		int roll;
		struct stud *next;
		struct stud *pre;
	   };
struct stud *head;
struct stud *end;
void insert_beg( int a)
{
 struct stud *temp1= (struct stud*)(malloc(sizeof(struct stud)));
 struct stud *temp2= (struct stud*)(malloc(sizeof(struct stud)));
 temp1->roll= a;
 temp1->next = NULL;
 temp1->pre = NULL;
 if(head == NULL)
  {
   head = temp1;
   end =temp1;
   }
 else
 {
  temp2 = head;
  temp1->next = temp2;
  temp2->pre= temp1;
  head = temp1;
 }
}
void delete_end()
{
 struct stud *temp, *tempp;
 (end->pre)->next= NULL;
 end= end->pre;
}
void print()
{
 struct stud *temp;
 temp = head;
 while(temp!=NULL)
 {
  printf(" %d",temp->roll);
  temp= temp->next;
 }
 printf(" \n");
}
void main()
{
 clrscr();
 head = NULL;
 insert_beg(2);
 print();
 insert_beg(3);
 print();
 insert_beg(4);
 print();
 insert_beg(5);
 print();
 delete_end();
 print();
 insert_beg(6);
 print();
 getch();
}

/*OUTPUT
 2
 3 2
 4 3 2
 5 4 3 2
 5 4 3
 6 5 4 3
*/