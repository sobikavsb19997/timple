#include<stdio.h>
void main()
{
  
int i,c=0,n1;
scanf("%d",&n1);
for(i=1;i<=n1;i++)
{
  if(n1%i==0)
  {
    c=c+1;
  }
}
if(c==2)
{
  printf("\nnot a composite");
}
else
{
  printf("\n composite");
}
}
