#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int i,j,k,s;
 for(i=1;i<10;i++)                         /* p letter first line */
 printf("*");
 for(s=1;s<=2;s++)
 printf(" ");
 for(i=1;i<=10;i++)                       /* i letter first line */
 printf("*");
 for(s=1;s<=2;s++)
 printf(" ");
 for(j=1;j<=1;j++)                        /* y letter first line */
 printf("*");
 for(k=1;k<12-2*1;k++)
 printf(" ");
 printf("*");
 for(s=1;s<=2;s++)
 printf(" ");
 printf("*");                  /* u letter first line */
 for(j=1;j<=8;j++)
 printf(" ");
 printf("*");
 for(s=1;s<=2;s++)
 printf(" ");
 for(j=1;j<9;j++)              /* s letter first line */
 {
  if(j==1)
  printf(" ");
  printf("*");
 }
 for(s=1;s<=3;s++)
 printf(" ");
 for(j=1;j<=10;j++)           /* h letter first line */
 {
  switch(j)
  {
   case 1 : printf("*");
	    break;
   case 10: printf("*");
	    break;
   default: printf(" ");
  }
 }
 printf("\n");
 for(j=1;j<=4;j++)
 {
  for(k=1;k<=10;k++)              /* p letter 2 3 4 5 line */
  {
   switch(k)
   {
    case 1 : printf("*");
	     break;
    case 10 : printf("*");
	     break;
    default : printf(" ");
	      break;
   }
  }
  for(s=1;s<=2;s++)
  printf(" ");
  for(k=1;k<=10;k++)                  /* i letter 2 3 4 5 lines */
  {
   if(k==5)
   printf("*");
   else
   printf(" ");
  }
  for(s=1;s<=2;s++)
  printf(" ");                      /* y letter 2 3 4 5 lines */
  for(i=1;i<j;i++)
  printf(" ");
  printf("*");
  for(k=1;k<10-2*j;k++)
  printf(" ");
  if(j==6)
  continue;
  printf("*");
  for(s=j+2;s>=1;s--)
  printf(" ");
  printf("*");                     /* u letter 2 3 4 5 lines */
  for(k=1;k<=8;k++)
  printf(" ");
  printf("*");
  for(s=1;s<=2;s++)
  printf(" ");
  printf("*");                     /* s letter 2 3 4 5 lines */
  if(j<2)
  {
   for(k=1;k<=9;k++)
   {
    switch(k)
    {
     case 9: printf("*");
	     break;
     default:printf(" ");
    }
   }
  }
  if(j==1)
  for(s=1;s<=2;s++)
  printf(" ");
  else
  for(s=1;s<=11;s++)
  printf(" ");
  if(j==5)                         /* h letter 2 3 4 5 lines */
  {
   for(i=1;i<=10;i++)
   printf("*");
  }
  else
  {
   for(i=1;i<=10;i++)
   {
    switch(i)
    {
     case 1 : printf("*");
	      break;
     case 10: printf("*");
	      break;
     default: printf(" ");
     }
    }
  }
  printf("\n");
 }
 for(i=1;i<10;i++)               /* p letter 6 line */
 printf("*");
 for(s=1;s<=3;s++)
 printf(" ");
 for(k=1;k<=10;k++)             /* i letter 6 line */
  {
   if(k==5)
   printf("*");
   else
   printf(" ");
  }
 for(s=1;s<=2;s++)
 printf(" ");
 for(j=1;j<=4;j++)            /* y letter 6 line */
 printf(" ");
 printf("*");
 for(s=1;s<=7;s++)
 printf(" ");
 printf("*");                /* u letter 6 line */
 for(j=1;j<=8;j++)
 printf(" ");
 printf("*");
 for(s=1;s<=2;s++)
 printf(" ");
 for(i=1;i<=8;i++)          /* s letter 6 line */
 {
  if(i==1)
  printf(" ");
  printf("*");
 }
 for(s=1;s<=3;s++)
 printf(" ");
 for(j=1;j<=10;j++)        /* h letter 6 line */
 printf("*");
 printf("\n");
 for(k=1;k<=4;k++)
 {
  printf("*");             /* p letter 7 8 9 10 line */
  for(s=1;s<11;s++)
  printf(" ");
  if(k==4)                 /* i letter 7 8 9 10 line */
  {
   for(i=1;i<=10;i++)
   printf("*");
  }
  else
  {
   for(i=1;i<=10;i++)
   {
    if(i==6)
    printf("*");
    else
    printf(" ");
   }
  }
  for(s=1;s<=2;s++)
  printf(" ");
  for(j=6;j>k+1;j--)     /* y letter 7 8 9 10 line */
  printf(" ");
  printf("*");
  for(s=1;s<=k+7;s++)
  printf(" ");
  if(k<=2)                    /* u letter 7 8 9 10 line */
  {
   printf("*");
   for(j=1;j<=8;j++)
   printf(" ");
   printf("*");
  }
  else if(k==3)
  {
   for(j=1;j<=10;j++)
   {
    if(j==2||j==9)
    printf("*");
    else
    printf(" ");
   }
  }
  else
  {
   for(i=1;i<=10;i++)
   {
   if(i<=2||i>=9)
   printf(" ");
   else
   printf("*");
   }
  }
  for(s=1;s<=2;s++)
  printf(" ");               /* s letter 7 8 9 10 lines */
  if(k<=2)
  {
   for(i=1;i<10;i++)
   printf(" ");
   printf("*");
  }
  if(k==3)
  {
   printf("*");
   for(j=1;j<9;j++)
   printf(" ");
   printf("*");
  }
   if(k==4)
  {
   for(i=1;i<9;i++)
   {
   if(i==1)
   printf(" ");
   printf("*");
   }
  }
  for(s=1;s<=2;s++)
  printf(" ");
  if(k==4)                    /* h letter 7 8 9 10 line */
  printf(" ");
  for(j=1;j<=10;j++)
   {
    switch(j)
    {
     case 1 : printf("*");
	      break;
     case 10: printf("*");
	      break;
     default: printf(" ");
     }
    }
  printf("\n");
  }
  getch();
 }


