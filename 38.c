#include<stdio.h>
#include<string.h>
void swap(int*,int*);
void main()
{
  int n1,n2;
  printf("enter two numbers");
  scanf("%d%d",&n1,&n2);
  swap(&n1, &n2);
  printf("after swapping %d\n%d",n1,n2);
  
}
void swap(int *xx,int *yy)
{
  *xx= *xx ^ *yy;
  *yy= *xx ^ *yy;
  *xx= *xx ^ *yy;
  
  
}
