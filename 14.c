#include<stdio.h>
void main()
{
int n,i;
printf("enter a num");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
if(n%2!=0)
{
printf("%d",i);
i++;
}
}
}
