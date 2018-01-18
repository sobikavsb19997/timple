#include<stdio.h>
void main()
{
int t,n,d=0,r=0;
printf("enter a number");
scanf("%d",&n);
t=n;
while(n>=1)
{
r=t%10;
d=(d*10)+r;
n=t/10;
}
printf("the reverse of the string is %d",d);
if(n==d)
{
printf("yes the number is palindrome ");
}
else
{
printf("no");
}
}
