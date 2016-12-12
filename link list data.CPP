#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>


void main()
{
   clrscr();
   struct link
{

  char name[20];
  int roll;
  struct link *next;
}*ptr1,*ptr2;
ptr1=(struct link *)malloc(sizeof(struct link));
printf("Enter Name:");
gets(ptr1->name);
printf("\nEnter Rol# ");
scanf("%d",&ptr1->roll);
ptr1->next=NULL;
ptr2=ptr1;
printf("Do Yor want Enter More Data Y/N");
  while(getch()=='y')
 { fflush(stdin);
   ptr2->next=(struct link *)malloc(sizeof(struct link));
   ptr2=ptr2->next;
   printf("\nEnter Name:");
   gets(ptr2->name);
   printf("\nEnter Rol# ");
   scanf("%d",&ptr2->roll);
   ptr2->next=NULL;

   printf("Do Yor want Enter More Data Y/N");

 }
  ptr2=ptr1;
  while(ptr2!=NULL)
  {
   printf("\nName:%s",ptr2->name);
   printf("\nRoll# %d",ptr2->roll);
   ptr2=ptr2->next;

  }
  getch();
}