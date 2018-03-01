#include<stdio.h>
void main()
{
	int num,s,n=0,k;
	scanf("%d",&num);
	while(num!=0)
	{
		k=num%10;
		num=num/10;
		n=(n*10)+num;
	}
	while(n!=0)
	{
		s=n%10;
		printf("%d\t",s);
		n=n/10;
	}
}
