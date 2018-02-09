#include<stdio.h>
void main()
{
  char s[20],k[20];
  int c=0,i;
  printf("enter two strings");
  scanf("%s",s);
  scanf("%s",k);
  while((s[i]!='\0')||(k[i]!='\0'))
  {
    if(s[i]==k[i])
    {
      i++;
      ++c;
    }
    if(s[i]>k[i])
    {
      printf("the greatest string is %s",s);
      break;
    }
    else
    {
      printf("the greatest string is %s",k);
      break;
    }
  }
    if(c!=0)
    {
      printf("the strings are same and the string is %s",s);
  }
}
