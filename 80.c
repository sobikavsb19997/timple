#include<stdio.h>
void main()
{
  int n,r;
  scanf("%d",&n);
  while(n!=0)
  {
    r=n%10;
    if(r%2!=0)
    {
      printf("%d\t",r);
    }
    n/=10;
  }
}
