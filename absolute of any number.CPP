#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b;
printf("Enter the number:	");
scanf("%d",&a);
if(a<0)
{
b=a*(-1);
printf("\nAnswer=%d",b);
}
else
printf("\nAnswer=%d",a);

getch();
}