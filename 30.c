#include<stdio.h>
void main()
{
int h1,h2,h3,m1,m2,m3;
printf("enter the time h1:m1");
scanf("%d%d",&h1,&m1);
printf("enter the time h2:m2");
scanf("%d%d",&h2,&m2);
h3=h1-h2;
m3=m1-m2;
printf("%d:%d",h3,m3);
}
