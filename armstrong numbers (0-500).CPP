#include<stdio.h>
#include<conio.h>
void main()
{
int i,a,b,c,d,e;
clrscr();
for(i=1;i<=500;i++)
{
if(i<=9&&i>=1)
{
a=i*i*i;
	if(a==i)
	{
	printf("\tArmstrong numbers:%d",i);
	}
}
if(i<=99&&i>=10)
{
a=i/10;
b=i%10;
c=(a*a*a)+(b*b*b);
	if(c==i)
	{
	printf(",%d",i);
	}
}
if(i<=500&&i>=100)
{
a=i/10;
b=i%10;
c=a/10;
d=a%10;
e=(b*b*b)+(c*c*c)+(d*d*d);
	if(e==i)
	{
	printf(",%d",i);
	}
}
}

getch();
}