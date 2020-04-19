#include <stdio.h>


int main() {
    int n,i,somma;
    printf("calcolo se il numero e' perfetto\n") ;
    printf("inserisci un numero: ");
    scanf("%d", &n); //con scanf va l'indirizzo, quindi uso e commerciale
    for( i=1, somma=0 ; i < n ; i++ ) { 
        if (n % i == 0) 
        {
            somma+=i ;   //forma contratta per dire somma = somma + i
        }
    }
    if ( n==somma )
    {
        printf("il numero %d e' perfetto",n);
    }
    else
    {
        printf("il numero %d non e' perfetto",n);
    }
    
 return 0;
}