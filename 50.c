#include<stdio.h>
void main()
{
  int flag=0,t,r;
  printf("enter a integer");
  scanf("%d",&r);
  t=r;
  while(t!=1)
  {
    if(t%2!=0)
    {
      flag=1;
      break;
    }
    else
    {
      t=t/2;
    }
  }
  if(flag==0)
  {
    printf("it is a power of 2 ");
  }
  else
  {
    printf("it is not a power of 2");
  }
}
