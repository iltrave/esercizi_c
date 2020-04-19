#include <stdio.h>


int main () {
    int max,i,p,somma;
    printf("calcolo i numeri perfetti fino alla cifra indicata\n");
    printf("inserisci il numero ");
    scanf("%d", &max);
    for (p=2; p <= max; p++)
    { 
        for ( i=1 , somma=0; i<p; i++ )
        {
            if (p % i == 0)
            {
                somma+=i;
            }
        }    
        
        if (somma==p)
            
            {
            printf("il numero %d e' perfetto\n", p );
            }
            
            
        
        
         
    }
return 0;








}