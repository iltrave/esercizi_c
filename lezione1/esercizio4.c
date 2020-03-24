#include <stdio.h>

/* funzione (subroutine) che converte un intero in una stringa
   che rappresenta il numero in binario.
   Solo prototipo, prometto al compilatore che
   la funzione é da qualche altrsa parte
 */

void
to_binary( int aa, char str[33] ) {
  int j, i = 0 ;
  unsigned a = (unsigned) aa ;
  /*
    while ( cond ) expression ;
    esegue espression finché cond e' vera
  */
  /* 
    operatori di confronto
    == uguaglianza
    != diverso
    >= maggiore o uguale
    <= minore o uguale
    > maggiore
    < minore
  */
 
  while ( a != 0 ) { 
    str[i] = '0' + (a%2);
    /* str[i] accedo all'i-esimo carattere della stringa str (a partire da 0) */
    a /= 2 ; /* scorciatoia per scrivere a = a / 2 ;
                in generale a OP= b ; ==> a = a OP b  */
    /* si può anche scrivere come a >>= 1 ; == dividere a per 2 */
    ++i;    /* scorciatoia per i = i+1 ; */
  }
  if ( i == 0 ) { str[0] = '0' ; ++i ; }
  str[i] = '\0' ; /* marco il fine stringa */
  /* devo rovesciare la stringa */
  /* for ( INIT ; COND ; INCR ) expression ;
     INIT e' eseguita una volta sola a inizio ciclo
     COND viene testata ogni ciclo all'inizio, se falsa esce dal ciclo for
     INCR viene eseguita alla fine di ogni ciclo
     expression viene eseguita ad ogni ciclo
  */
  --i ; /* per non scambiare lo 0 marcatore di fine stringa */
  for ( j=0 ; j < i ; --i, ++j ) {
    /* scambio str[i] con str[j] */
    char bf = str[i] ;
    str[i] = str[j] ;
    str[j] = bf ;
  }
}

int main()
{
    int a = 112;
    int b = 203;
    int const c = 322;
    int d ;
    char str1[33];  /* vettore di 33 caaratteri */
    char str2[33];
    char str3[33];

    /* Manipolazione di BIT */

    printf("Esempio shift a sinistra di 1 bit (equivale x2 in binario)\n");
    a = b << 1; /*shift a sx di 1 bit*/
    printf("%d = %d<<1\n", a, b);
    to_binary(a, str1);
    to_binary(b, str2);
    printf("stessa cosa in base 2, notazione (n)_2 numero in base 2\n");
    printf("(%s)_2 <-- (%s)_2>>1\n\n", str1, str2);


    printf("Esempio shift a destra di 1 bit (equivale a /2 in binario)\n") ;
    a = b >> 1 ; /* shift a destra di 1 bit */
    printf("%d <-- %d>>1\n", a, b) ;
    to_binary(a, str1) ;
    to_binary(b, str2) ;
    printf("stessa cosa in base 2, notazione (n)_2 numero in base 2\n") ;
    printf("(%s)_2 <-- (%s)_2>>1\n\n", str1, str2) ;

    /* OPERAZIONI MASCHERE BIT A BIT */

    printf("Esempio bit AND\n") ;
    a = b & c ; /* and bit a bit */
    to_binary(a, str1) ;
    to_binary(b, str2) ;
    to_binary(c, str3) ;
    printf("(%s)_2 <-- (%s)_2 & (%s)_2\n\n", str1, str2, str3);

    printf("Esempio bit OR\n") ;
    a = b | c ; /* or bit a bit */
    to_binary(a, str1) ;
    to_binary(b, str2) ;
    to_binary(c, str3) ;
    printf("(%s)_2 <-- (%s)_2 | (%s)_2\n\n", str1, str2, str3);

    printf("Esempio bit XOR\n") ;
    a = b ^ c ; /* or esclusivo bit a bit */
    to_binary(a, str1) ;
    to_binary(b, str2) ;
    to_binary(c, str3) ;
    printf("(%s)_2 <-- (%s)_2 ^ (%s)_2\n\n", str1, str2, str3);

    printf("Esempio bit NEGAZIONE o COMPLEMENTO\n") ;
    a = ~b ; /* complemento bit a bit */
    to_binary(a, str1) ;
    to_binary(b, str2) ;
    printf("(%s)_2 <-- ~(%s)_2\n\n", str1, str2) ;
    printf("Attenzione i bit a 0 a sinistra non vengono stampati\n");
    printf("ma dopo il complemento sono a 1, ce ne sono tanti quanto\n");
    printf("la dimensione in bit dell'intero usato.\n\n\n");

    printf("Esempio maschere di bit\n") ;
    d = b & 0xFF ; /* controllo se i primi 8 bit sono assegnati */
    to_binary(0b11111111, str1) ;
    to_binary(b,    str2) ;
    to_binary(d,    str3) ;
    printf("(%s)_2 <-- (%s)_2 & (%s)_2\n\n", str3, str2, str1) ;

    printf("Esempio maschere di bit + shift\n") ;
    b = 1234;
    d = (b<<4) & 0b11111111; /* controllo se i primi 8 bit sono assegnati */
    to_binary(0xFF, str2) ;
    to_binary(b, str1) ;
    to_binary(d, str3) ;
    printf("(%s)_2 <-- ((%s)_2 << 4) & (%s)_2\n\n", str3, str1, str2) ;

    return 0 ; 
}
