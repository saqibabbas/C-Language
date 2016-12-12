#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int num,a,b,c,d,e,f,g,h,i,acegi;
printf("Enter the number: ");
scanf("%d",&num);
a=num%10;
b=num/10;
c=b%10;
d=b/10;
e=d%10;
f=d/10;
g=f%10;
h=f/10;
i=h%10;
printf("\n\n%d%d%d%d%d",a,c,e,g,i);
if(a==i&&c==g)
{printf("\n\nBoth numbers are equal");
}
else
printf("\n\nNumbers are not equal");


getch();
}