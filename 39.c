#include<stdio.h>
void main()
{
  int a[20],i,n,;
  printf("enter 10 numbers");
  for(i=0;i<10;i++)
  {
     scanf("%d",&a[i]);
  }
n=a[0];
  for(i=0;i<10;i++)
{
  if(a[i]>n)
    {
      n=a[i];
    }
}
  
  printf ("largest number is %d",n); 

}
