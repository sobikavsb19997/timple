#include<stdio.h>
#include<string.h>
void main()
{
  int c1=0,i,k=0;
  char s[20];
  scanf("%s",s);
  c=strlen(s);
  
  
    k=c1/2;
  
  for(i=0;s[i]!='\0';i++)
  {
  if(i==k)
  {
    printf("*");
  }
else
  {
    printf("%c",s[i]);
  }
  }
  
}
