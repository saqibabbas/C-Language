#include<stdio.h>
#include<conio.h>
void main()
{
char s,y,n;
clrscr();
int a[4]={9,4,2,6};
s='y';
while(s=='y')
{
s='n';
for(int i=0;i<4;i++)
{

	if(a[i]>a[i+1])
	{
	int c;
	c=a[i];
	a[i]=a[i+1];
	a[i+1]=c;
	s='y';
	}

}
}
for(int k=0;k<4;k++)
{
printf("%d ",a[k]);
}

getch();
}