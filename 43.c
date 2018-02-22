#include<stdio.h>
#include<string.h>
void main()
{
char s1[20],s2[20];
int a,i=0;
printf("enter two string");
scanf("%s",s1);
scanf("%s",s2);
a=strlen(s1);
a=a-1;
while(s2[i]!='\0')
{
s1[a+1]=s2[i];
i++;
a++;
}
printf("%s",s1);
}
