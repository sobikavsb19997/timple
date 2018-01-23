#include<stdio.h>
void main()
{
char s[30];int t;
printf("enter a sentence");
scanf("%s",s);
for(i=0;i<=s[30];i++)
{
if(s[i]!==\n)
{
t=t++;
}
}
printf("total number of characters=%d",t);
}
