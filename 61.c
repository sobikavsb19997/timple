#include<stdio.h>
void main()
{
  char s1[30];
  int i,n;
  printf("enter a string");
  scanf("%s",s1);
  printf("enter a number");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("%c",s1[i]);
  }
}
