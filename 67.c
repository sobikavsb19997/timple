#include<stdio.h>
void main()
{
  int n,q, r1;
  printf("enter a number");
  scanf("%d",&n);
  q=n/10;
  r1=n%10;
  if(r1<5)
  {
    printf("%d0",q);
  }
  else
  {
    printf("%d0",q+1);
  }
}
