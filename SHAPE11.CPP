#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,k;
for(j=1;j<=5;j++)
{
	for(k=5;k>=j;k--)
	{
	printf(" ");
	}
	for(i=1;i<=j;i++)
	{
	printf("%d",i);
	}
printf("\n");
}


getch();
}