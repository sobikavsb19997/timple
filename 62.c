#include<stdio.h>
void main()
{
  int i,f=0;
  char s[20];
  scanf("%d",s);
  for(i=0;s[i]!='\0';i++)
  {
    if(s[i]==1||s[i]==0)
    {
      f=1;
    }
    else
    {
      f=0;
    }
  }
  if(f==1)
  {
    printf("yes");
  }
  else
  {
    printf("no");
  }
}
