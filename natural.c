#include<stdio.h>
#include<conio.h>
void main()
{
int n,sum=0;
clrscr();
printf("enter n value");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
sum=sum+i;
}
printf("sum of n numbers is %d",sum);
getch();
}
