#include<stdio.h>
void main()
{
  int b,t,a;
  printf("enter two number");
  scanf("%d%d",&a,&b);
  t=a;
  a=b;
  b=t;
  printf("after swapping:%d %d",a,b);
  
}
