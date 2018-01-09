#include<stdio.h>
#include<conio.h>
void main()
{
char c;
clrscr();
printf("enter a character");
scanf("%d",&c);
if(c>='a'&&c<='z'||c>='A'&&c<='Z')
{
printf("alphabet");
}
else
{
printf("not a alphabet");
}
getch();
}
