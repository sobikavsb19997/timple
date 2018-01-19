#include<stdio.h>
void main()
{
int t,n,sum=0;
t=n;
for(i=150;i<=160;i++)
{
while(n!=0)
{
r=t%10;
d=r*r*r;
sum=sum+d;
t=t/10;
}
if(n==sum)
{
printf("yes");
}
else
{
printf("no");
}
}
}
