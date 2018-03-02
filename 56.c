#include<stdio.h>
void main()
{
  char s[30];
  int i,flag=0,fl=0;
  scanf("%s",s);
  for(i=0;s[i]!='\0';i++)
  {
    if(s[i]>='a'&&s[i]<='z')
    {
     flag=1;
    }
     else if(s[i]>='0'&&s[i]<='9')
    {
      fl=1;
    }
    else
    {
      flag=0;
      f=0;
    }
  }
  if(flag==1&&fl==1)
  {
    printf("yes");
  }
  else
  {
    printf("no");
  }
}
