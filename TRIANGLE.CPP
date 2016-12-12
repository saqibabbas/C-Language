#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
float sum,a,b,c;
printf("	Enter angles");
printf("\n\nA: ");
scanf("%f",&a);
printf("\nB: ");
scanf("%f",&b);
printf("\nC: ");
scanf("%f",&c);
sum=a+b+c;
if(sum==180)
{printf("\n	Valid triangle");
}
else
printf("\n	Invalid triangle");

getch();
}