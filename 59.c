#include<stdio.h>
void main()
{
  int n[10],i,a;
  printf("enter 10 nos");
  for(i=0;i<10;i++)
  {
    scanf("%d",&n[i]);
  }
  a=n[0];
  for(i=0;i<10;i++)
  {
    if(n[i]>a)
    
    a=n[i];
  }
  printf("%d",a);
}
