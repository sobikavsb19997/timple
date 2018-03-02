#include<stdio.h>
void main()
{
  int a,b,t1;
  scanf("%d%d",&a,&b);
  t1=a;
  a=b;
  b=t1;
  printf("%d\t%d",a,b);
}
