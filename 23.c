#include<stdio.h>
void main()
{
int i,j,n;
int a[10];
printf("enter the value of n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n,i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]<a[j])
{
temp=a[i];
}
else
{
temp=a[j];
}

}
}
printf("%d",temp);
}
