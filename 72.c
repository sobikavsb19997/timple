#include<stdio.h>
void main()
{
  char s[20];
  int i,f=0;
  printf("enter a string");
  scanf("%s",s);
  for(i=0;s[i]!='\0';i++)
  {
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
    {
      f=1;
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
