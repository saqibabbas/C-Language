#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,k,l;
for(j=0;j<=5;j++)
{
	for(k=5;k>=j;k--)
	{
	printf(" ");
	}
	for(i=1;i<=j;i++)
	{
	printf("*");
	}
	for(l=0;l<=j;l++)
	{
	printf("*");
	}
printf("\n");
}
for(j=5;j>=0;j--)
{
	for(k=6;k>=j;k--)
	{
	printf(" ");
	}
	for(i=2;i<=j;i++)
	{
	printf("*");
	}
	for(l=1;l<=j;l++)
	{
	printf("*");
	}
printf("\n");
}


getch();
}