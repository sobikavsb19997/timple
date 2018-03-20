#include<stdio.h>
void main()
{
  int c=0,d=0,e=0,f=0,i,j,k,m,l1[3],l2[3],l3[3],l4[3];
  
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
  for(m=0;m<2;m++)
  {
    scanf("%d",&l4[m]);
  }
  
  c=l1[0]/l1[1];
  printf("%d\n",c);
  d=l2[0]%l2[1];
  printf("%d\n",d);
  e=l3[0]/l3[1];
  printf("%d\n",e);
  f=l4[0]-l4[1];
  printf("%d",f);
}
