
#include <stdio.h>
#include <conio.h>
void main()
{clrscr();
int a,num,i=1,j=0;
printf("Enter number:");
scanf("%d",&num);
while(num!=0)
{
a=num%8;
j=j+a*i;
i=i*10;
num=num/8;
}
printf("ocatal equivalent is: %d",j);

getch();
 getch();
}