#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("enter a year");
scanf("%d",&n);
if(n%4==0)
{
printf("it is a leap year");
}
else
{
printf("it is not a leap year");
}
getch();
}
