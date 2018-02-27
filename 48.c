#include<stdio.h>
void main()
{
  int s[30],ave,sum=0,i,n;
  printf("enter a limit");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&s[i]);
  }
  for(i=0;i<n;i++)
  {
    sum=sum+s[i];
  }
  ave=sum/n;
  printf("the average of n numbers=%d",ave);
}
