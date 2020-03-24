#include <stdio.h>
/*PROGRAMMAZIONE in C-LABORATORIO

- Non può manipolare stringhe.
- Deve appoggiarsi a librerie (devo includerle).
- Non ha funzioni matematiche (deve includere libreria esterna).
- E’ un linguaggio compilato.
- I file vengono dati “in pasto” ad un eseguibile (su Windows esce .exe). 
- I file si salvano con .c o .h.
- Il compilatore può generare un file eseguibile o un file oggetto ( .o).
- LINKING: passare da file oggetto ad eseguibile passando per il linker (compilatore C).
- '<...>' includo file della libreria standard.
- "..." includo file locali.
- 'int const c = 159',  'const' quando voglio tenere una variabile inizializzata costante.
- per stampare caratteri speciali printf ("mucca\%")---->  mucca%, il '%' è un carattere speciale e devo usare '\'.
- posso scrivere i numeri in decimale, ottadecimale e esadecimale.
- 'str[33]' stringa di 33 caratteri.


TIPI DI VARIABILI:

- 'int' intero (2^32 bytes);
- 'long int' intero (2^64 bytes);
- 'short int' intero (2^16 bytes);
- 'unsigned int' numero intero sia + o -, poi lo combino con long e short; 


OPERAZIONI BASE con variabili:

- a + b;
- a - b;
- a * b;
- a / b divisione con numero intero;
- a % b divisione con resto;
 

FUNZIONI:

- 'printf' stampo le stringhe nel terminale:
				- se tra ("parole") stampo così com'è
				- se tra ("%d") inserisce e printa le variabili che ho dichiarato sopra*/


/*STRUTTURA PROGRAMMA C*/

int main () 
/*- MAIN: indica la funzione principale, che restituisce un numero intero.
  - INT è il ritorno
  - '{...}' indica un blocco all'interno del quale io posso inizializzare variabili
  - '(...)' possono contenere li argomenti che da il sistema operativo al programma
            (per il momento non ci interessa)*/
{
    

return 0;

/*se ritorna a 0 = nessun errore*/

}

/*COMPILAZIONE DA LINEA DI COMANDO:
[TERMINAL (UNIX)]
- '~' altgr + ^, sarebbe la HOME del terminal.
- nel terminal se sono pigro scrivo 'Des' e poi tab per completare 'Desktop/'.
- 'cd' apro cartelle.
- 'ls' sarebbe list, vedo cosa c'è dentro.


- per generare l'eseguibile posso farlo in due modi nella cartella scrivo: 
            1a - 'gcc name.c -o nameofexe' [su macchine unix con compilatore gcc];
            1b - 'clang name.c -o nameofexe' [su macchine OSX o unix con compilatore clang]
            
            2 - 'gcc name.c' generando un file 'a.out';
           
            3 - METOO IN DUE PASSI:
                a - 'gcc -c name.c' compilo e genero name.o (file oggetto codice exe "incompleto")
                b - 'gcc name.o -o nameofexe' link del codice exe con lib stand e del sist op
            NB: poi listo e verifico se c'è.

- 'ls -al' da il tipo di file e li lista '-x' vuol dire che è eseguibile;
- '-Wall' dammi tutti gli warning;

*/