#include<stdio.h>
void main()
{
 char a[30];
 int i, count=0;
 printf("enter a paragraph");
 scanf("%[^\n]s",&a);
 for(i=0;a[i]!='\0';i++)
 {
 if(a[i]=='.')
 {
 count=count+1;
 }
 }
 printf("number of lines=%d",count);

}
