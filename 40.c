#include<stdio.h>
void main()
{
  int a=0,b=1,c,n,i;
 
  printf("enter the limit");
  scanf("%d",&n);
   printf("%d",b);
  for(i=0;i<n-1;i++)
  {
    c=a+b;
    a=b;
    b=c;
    printf("\n %d",c);
  }
}
