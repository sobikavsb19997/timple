#include<stdio.h>
void main()
{
int n,t,sum=0;
printf("enter a number");
scanf("%d",&n);
t=n;
while(n!=0)
{
r=t%10
d=r*r*r;
sum=sum+d;
t=t/10;
}
if(sum==n)
{
printf("armstrong");
}
else
{
printf("not");
}
}
