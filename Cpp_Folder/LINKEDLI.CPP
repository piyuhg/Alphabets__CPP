#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct stud{
	    int roll;
	    stud * next;
	   };
typedef struct stud stud1;
stud1 *front = NULL;
void main()
{
 clrscr();
 stud1 *fstud, *sstud,*tstud, *temp, *r, *q;
 fstud = (stud1*)malloc(sizeof(stud1));
 sstud = (stud1*)malloc(sizeof(stud1));
 sstud = (stud1*)malloc(sizeof(stud1));
 fstud -> roll= 1; fstud -> next= sstud;
 sstud -> roll= 2; sstud -> next= tstud;
 tstud -> roll= 3; tstud -> next= NULL;
 temp = fstud;
 while(temp != NULL)
 {
  printf(" %d", temp-> roll);
  temp = temp -> next;
 }
 /*INSERTION
 {
  int item, loci;
  stud *NEW;
  NEW = (stud1*)malloc(sizeof(stud1));
  printf("\nEnter the value to be added\n");
  scanf("%d",&item);
  printf("\nEnter the location where insertion is required\n");
  scanf(" %d",&loci);
  NEW -> roll = item;
  if(loci==0)
  {
   NEW ->next = fstud;
   temp = NEW;
  }
  if(loci>0&&loci<=2)
  {
   if(loci==1)
   {
    NEW -> next = sstud;
    fstud -> next = NEW;
   }
   else
   {
    NEW -> next = tstud;
    sstud -> next = NEW;
   }
   temp= fstud;
  }
  else
  {
   temp = fstud;
   NEW -> next = NULL;
   tstud -> next = NEW;
  }
  while(temp!= NULL)
  {
   printf(" %d",temp-> roll);
   temp = temp-> next;
  }
 }
 //DELETION
 {
  temp = fstud;
  int item;
  printf(" Enter the item to be deleted");
  scanf("%d", &item);
  while(temp != NULL)
  {
   if(item == temp->roll)
   {
    temp-> next= temp;
    printf("\n %d", temp-> roll);
   }

    printf("1");

   temp = temp-> next;
  }
 }
 */
 printf("\n");
 temp = fstud;
 while(temp!= NULL)
 {
   r=q;
   q = temp;
   temp = temp-> next;
   q->next = r;
   printf(" %d", temp-> roll);
 }
 q= fstud;


 getch();
}
