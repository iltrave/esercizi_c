#include <stdio.h>
int main ()
{
  int top;
  top=1000;
  printf("numeri primifino a %d\n1    2    ",top);
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