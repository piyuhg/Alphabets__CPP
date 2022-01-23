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
 int n = 0;
 stud1 *fstud, *sstud,*tstud, *temp,*NEW;
 fstud = (stud1*)malloc(sizeof(stud1));
 sstud = (stud1*)malloc(sizeof(stud1));
 sstud = (stud1*)malloc(sizeof(stud1));
 NEW = (stud1*)malloc(sizeof(stud1));
 fstud -> roll= 1; fstud -> next= sstud;
 sstud -> roll= 2; sstud -> next= tstud;
 tstud -> roll= 3; tstud -> next= NULL;
 temp = fstud;
 while(temp != NULL)
 {
  printf(" %d", temp-> roll);
  temp = temp -> next;
  n++;
 }
 printf(" n= %d",n);
 {
  //INSERTION//
  int i , loci, item;
  printf("\n ENTER THE POSITION WHERE INSERTION IS TO BE DONE");
  scanf(" %d",&loci);
  printf("ENTER THE ITEM TO BE INSERTED\n");
  scanf(" %d", &item);
  NEW->roll = item;
  if(loci==1)
  {
   temp= NEW;
   NEW->next= fstud;
   while(temp!= NULL)
   {
    printf(" %d",temp-> roll);
    temp= temp->next;
   }
  }
  else
  {
   temp= fstud;
   for(i=1;i<=n;i++)
   {
    if(i==loci)
    {
     NEW->next= temp;
     temp=fstud;
     for(i=1;i<=n;i++)
     {
      if(loci==i+1)
      {
       temp->next = NEW;
       break;
      }
       temp= temp-> next;
     }
     break;
    }
    else
    temp= temp->next;
   }
  if(loci>n)
  {
   temp= tstud;
   temp->next = NEW;
   NEW-> next = NULL;
  }
   temp= fstud;
   while(temp!=NULL)
   {
    printf(" %d",temp->roll);
    temp= temp->next;
   }
  }
 }
 {
  //REVERSAL//





















 getch();
}