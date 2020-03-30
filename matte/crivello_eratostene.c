#include <stdio.h>
int main ()
{
  int top=100;
  int a[top];
  //input
  for(int i=0;i<=top;++i)
  {
    a[i]=1;
  }
  //operazioni
  for(int k=2;k*k<=top;++k)
  {
    if(a[k]==1)
    for(int i=2;i*k<=top;++i)
    a[i*k]=0;
  }
  //output
  printf("NUMERI PRIMI FINO A %d\n\n",top);
  for(int i=1;i<top;++i)
  {
    if(a[i]==1)
    printf("   %d   ",i);
  }
  return 0;
}