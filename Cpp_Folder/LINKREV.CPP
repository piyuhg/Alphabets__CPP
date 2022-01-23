#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct stud{
	    int roll;
	    stud *next;
	   };
typedef struct stud stud1;
stud1 *front = NULL;


void main()
{
 clrscr();
 int n,i;
 n=0;
 i=0;
 stud1 *fstud, *sstud,*tstud, *temp;
 fstud = (stud1*)malloc(sizeof(stud1));
 sstud = (stud1*)malloc(sizeof(stud1));
 sstud = (stud1*)malloc(sizeof(stud1));
 fstud -> roll= 1; fstud -> next= sstud;
 sstud -> roll= 2; sstud -> next= tstud;
 tstud -> roll= 3; tstud -> next= NULL;
 temp= fstud;
 while(temp!= NULL)
 {
  n++;
  printf(" %d",temp->roll);
  temp= temp-> next;
 }
 printf("\n n= %d\n",n);
 temp= fstud;
 for(i=1;i<=n;i++)
 {
  if(i==n)
  {
   printf(" %d",temp->roll);
   temp=fstud;
   i=0;
   n--;
  }
  else
  temp= temp->next;
 }





 getch();
}
