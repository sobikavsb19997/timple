#include<stdio.h>
void main()
{
int flag,n;
printf("enter a number");
scanf("%d",&n);
for(i=2;i<=n\2;i++)
{
if(n%i==0)
{
flag=1;
break;
}
if(flag==0)
{
printf("it is prime");
}
else
{
printf("prime not");
}
