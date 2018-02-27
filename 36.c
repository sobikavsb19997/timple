#include<stdio.h>
void main()
{
  char s[30];
  int d=0,i;
  printf("enter a string");
  scanf("%s",s);
  for(i=0;s[i]!='\0';i++)
  {
    if(s[i]=='@'||s[i]=='!'||s[i]=='$')
    {
      d=d+1;
      
    }
  }
  printf("total num of integer =%d",d);
}
