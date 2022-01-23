#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct stud{
	    int roll;
	    struct stud *next;
	   };
typedef struct stud stud1;
stud1 *front = NULL;
void main()
{
 clrscr();
 stud1 *fstud, *sstud, *tstud, *temp, *s;
 fstud = (stud1*)malloc(sizeof(stud1));
 sstud = (stud1*)malloc(sizeof(stud1));
 tstud = (stud1*)malloc(sizeof(stud1));
 fstud->roll= 15; fstud->next= sstud;
 sstud->roll= 25; sstud->next= tstud;
 tstud->roll= 35; tstud->next= fstud;
 temp = fstud;
 do{
 printf(" %d",temp->roll);
 temp= temp->next;
 }
 while(temp!=fstud);
 //insertion at begining
 {
 int item;
 printf("\nEnter the item to be inserted at begining\n");
 scanf("%d",&item);
 s->roll= item;
 s->next= tstud->next;
 tstud->next= s;
 temp = s;
 do{
  printf(" %d",temp->roll);
  temp= temp->next;
 }
 while(temp!=s);
}
//deletion at end
{
 printf("\n The last element is deleted");
 temp = s;
 sstud->next= s;
 tstud->next= NULL;
 do{
 printf(" %d",temp->roll);
 temp= temp->next;
 }
 while(temp!=s);
}
 getch();
}