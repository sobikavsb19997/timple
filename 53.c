#include<stdio.h>
void main()
{
  int n,s=0,d;
  scanf("%d",&n);
  while(n!=0)
  {
    d=n%10;
    s=s+d;
    n=n/10;
  }
  printf("%d",s);
}
