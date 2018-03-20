#include<stdio.h>
void main()
{
  int c=0,d=0,e=0,i,j,k,l1[3],l2[3],l3[3];
  
  for(i=0;i<2;i++)
  {
    scanf("%d",&l1[i]);
  }
  for(j=0;j<2;j++)
  {
    scanf("%d",&l2[j]);
  }
  for(k=0;k<2;k++)
  {
    scanf("%d",&l3[k]);
  }
  c=l1[1]-l1[0];
  printf("%d\n",c);
  d=l2[1]-l2[0];
  printf("%d\n",d);
  e=l3[1]-l3[0];
  printf("%d",e);
}
