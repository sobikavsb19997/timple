#include<stdio.h>
void main()
{
  char a[30];
  int c=0,i;
  printf("enter a string");
  scanf("%s",a);
  for(i=0;a[i]!='\0';i++)
  {
    if(a[i]>='0'&&a[i]<='9')
    {
      c=c+1;
      
    }
  }
  printf("total num of integer =%d",c);
}
