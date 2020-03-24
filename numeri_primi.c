#include <stdio.h>
int main ()
{
  int top;
  //bool b;
  top=10000;
  //b=false;
  printf("numeri primifino a %d\n",top);
  for(int a=2;a<=top;++a)
  {
      for(int i=a/2;i>1;--i)
      {
          if(a%i==0) 
            break;
          else
            if(i==2)
              printf("%d    ", a); 
      } 
  }
  return 0;
}