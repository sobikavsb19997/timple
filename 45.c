#include<stdio.h>

void main()

{
 
 int i,c=0;

  char n[10000];
 
 printf("enter a number");
 
 scanf("%s",n);
 
 for(i=0;n[i]!='\0';i++)

  {
   
 c++;
  
}
 
 printf("%d",c);

}
