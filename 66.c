#include<stdio.h>
void main()
{
	int a,i,count=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("Prime Number");
	}
	else
	{
		printf("Not a Prime Number");
	}
