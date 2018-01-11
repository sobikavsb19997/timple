#include<stdio.h>
void main()
{
int count,n;
printf("enter the value of n")
scanf("%d",&n)
while(n!=0)
{
n=n%10;
count=count+1;
n=n/10;
}
printf("the total no of digits are %d",count);
}
