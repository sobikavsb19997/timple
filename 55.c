#include<stdio.h>
void main()
{
  int n,rem=0,m,l;
  scanf("%d%d",&n,&m);
  l=n*m;
  rem=l%2;
  if(rem==0)
  {
    printf("even");
  }
  else
  {
    printf("odd");
  }
}
