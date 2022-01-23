#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct stud{
		int roll;
		struct stud *next;
	    };
struct stud *top;
void push(int a)
{
 struct stud *temp1= (struct stud*)(malloc(sizeof(struct stud)));
 struct stud *temp2= (struct stud*)(malloc(sizeof(struct stud)));
 temp1->roll= a;
 temp1->next = NULL;
 if(top == NULL)
  {
   top = temp1;
  }
 else
 {
  temp2 = top;
  temp1->next = temp2;
  top = temp1;
 }
}
void pop()
{
 struct stud *temp, *NEW;
 NEW= top;
 top= top->next;
}
void print()
{
 struct stud *temp;
 temp = top;
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
 top = NULL;
 push(2);
 print();
 push(3);
 print();
 push(4);
 print();
 push(5);
 print();
 pop();
 print();
 push(6);
 print();
 getch();
}

/*OUTPUT

 2
 3 2
 4 3 2
 5 4 3 2
 4 3 2
 6 4 3 2 

 