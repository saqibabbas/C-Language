#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[4]={2,4,8,6};
for(int i=0;i<4;i++)
{
	for(int j=i+1;j<4;j++)
	{
	if(a[i]>a[j])
	{
	int c;
	c=a[i];
	a[i]=a[j];
	a[j]=c;

	}


	}


}
for(int k=0;k<4;k++)
{
printf("%d ",a[k]);
}

getch();
}