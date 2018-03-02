#include<stdio.h>
void main()
{
  int a,b,c,t=1,n;
  printf("enter a limit");
  scanf("%d",&n);
  a=0;
  b=1;
  printf("%d%d",a,b);
  while(t<=n)
  {
    c=a+b;
    a=b;
    b=c;
    printf("%d",c);
    t++;
  }
}
