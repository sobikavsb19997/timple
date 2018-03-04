#include<stdio.h>
void main()
{
  char s1[20];
  int i,c=1;
  scanf("%[^\n]s",&s1);
  for(i=0;s1[i]!='\0';i++)
  {
    if(s1[i]==' ')
    {
      c=c+1;
    }
  }
  printf("%d",c);
}
