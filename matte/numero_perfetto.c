#include <stdio.h>

int main ()
{
  int n,s,count=1;
  printf("Inserire un numero numero\n");
  scanf("%d",&n);
  for(int i=2;i*i<=n;++i)
     if(n%i==0)
       {
           s=n/i;
           //printf("(%d,%d)  ",i,s);
           count+=i;
           count+=s;
       }
  if(count==n)
    printf("il numero %d e' perfetto!",n);
  else
    printf("%d non e' numero perfetto!",n); 
  return 0;
}