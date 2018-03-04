#include<stdio.h>
void main()
{
  int n,ct=0,m=1,p=2,i;
  scanf("%d",&n);
  while(n!=1)
  {
    n=n/2;
    ct++;
  }
  for(i=0;i<=ct;i++)
  {
    m=m*p;
  }
  printf("%d",m);
}
