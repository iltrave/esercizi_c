#include <stdio.h>
int perfetto(int n)
{
    int s,count=1;
    for(int i=2;i*i<=n;++i)
     if(n%i==0)
       {
           s=n/i;
           count+=i;
           count+=s;
       }
    if(count==n)
    return 0;
    else 
    return 1;
}

int main ()
{
  int n,i,count=0;
  printf("Inserire un numero numero\n");
  scanf("%d",&n);
  for(i=0;i<=n;++i)
     if(perfetto(i)==0)
       count+=1;
  printf("Da 0 a %d ci sono %d numeri perfetti (contando l'1)",n,count);
  return 0;
}