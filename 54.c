#include<stdio.h>
void main()
{
  int n,r=0;
  scanf("%d",&n);
  r=n%2;
  if(r==0)
  {
    printf("%d",n-2);
  }
  else
  {
    printf("%d",n-1);
  }
}
