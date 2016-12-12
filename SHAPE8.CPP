#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j;
for(j=103;j>=97;j--)
{
	for(i=97;i<=j;i++)
	{
	printf("%c",i);
	}
printf("\n");
}


getch();
}