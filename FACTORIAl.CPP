#include<stdio.h>
#include<conio.h>
void main()
{
int i,num,fact=1;
scanf("%d",&num);
i=num;
while(i>=1)
{
fact=fact*i;
printf("%d",fact);
i--;
}
getch();
}