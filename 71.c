#include<stdio.h>
#include<string.h>
void main()
{
  char s[10],t[10],temp;
  int i,j,f=0;
  printf("enter a string");
  scanf("%s",&s);
  for(i=0;s[i]!='\0';i++)
  {
  t[i]=s[i];
  }
  i=0;
  j=strlen(s)-1;
  while(i<j)
  {
    temp=s[i];
    s[i]=s[j];
    s[j]=temp;
    i++;
    j--;
  }
  printf("%s",s);
  for(i=0;s[i]!='\0';i++)
  {
  if(t[i]==s[i])
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
