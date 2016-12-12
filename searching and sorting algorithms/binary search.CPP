
#include<stdio.h>
#include<conio.h>
void main()
{
char c,y,n;
clrscr();
 int a[7]={10,20,30,40,50,60,70};
int s=0,e=6,t;
scanf("%d",&t);

int m;
c='y';
while(c=='y')
{
if(t<a[s]||t>a[e])
{
printf("ponka");
break;
}
c='y';
m=(s+e)/2;
if(a[m]==t)
{
printf("found at %d",m);
c='n';
}
if(t>a[m])
{
s=m+1;
}
if(t<a[m])
{

e=m-1;
} }
getch();
}