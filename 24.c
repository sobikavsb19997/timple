#include<stdio.h>
void main()
{
int i,j,temp=0,n;
int a[10];
printf("enter the value of n ");
scanf("%d",n);
printf("enter the elements");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}

