#include<stdio.h>
void main()
{
  int s[30],n,i,a,d;
  printf("enter the limit");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&s[i]);
  }
  a=s[0];
  for(i=0;i<n;i++)
  {
    if(s[i]>s[0])
    {
      a=s[i];
     
    }
  }
  d=s[0];
  for(i=0;i<n;i++)
  {
    if(s[i]<s[0])
    {
      d=s[i];
    }
  }
   printf("%d\n",a);
   printf("%d",);
}
