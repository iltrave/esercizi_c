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
- per stampare caratteri speciali printf ("mucca\%")---->  mucca%, il '%' è un carattere speciale e devo usare '\' 
  oppure '%'. Esempio \% o %%.
- posso scrivere i numeri in decimale, ottadecimale e esadecimale.
- 'str[33]' stringa di 33 caratteri.


/*STRUTTURA PROGRAMMA C

  - MAIN: indica la funzione principale, che restituisce un numero intero.
  - INT è il ritorno
  - '{...}' indica un blocco all'interno del quale io posso inizializzare variabili
  - '(...)' possono contenere li argomenti che da il sistema operativo al programma
            (per il momento non ci interessa)*/


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
- per eseguire il file './' in linux o '.\' oppure nulla in conemu.


- 'ls -al' da il tipo di file e li lista '-x' vuol dire che è eseguibile;
- '-Wall' dammi tutti gli warning;

TIPI DI VARIABILI:

- 'int' intero (2^32 bytes);
- 'long int' intero (2^64 bytes);
- 'short int' intero (2^16 bytes);
- 'unsigned int' numero intero sia + o -, poi lo combino con long e short; 
- si possono usare le forme contratte 
   unsigned int       = unsigned
   long int           = long
   short int          = short
   signed int         = int
   unsigned long int  = unsigned long
   unsigned short int = unsigned short

- 'char' per i caratteri. Per esempio: char str[25]
  stringa di 25 caratteri

/*OPERAZIONI BASE con variabili:

- a = b + c ; somma
- a = b - c ;  differenza 
- a = b * c ;  prodotto
- a = b / c ;  divisione intera  10/4 ==> 2
- a = b % c ;  resto della divisione 20 % 3 ==> 2 
                infatti 20 = 3*6 + 2 */
 

/*FUNZIONI:

- 'printf' stampo le stringhe nel terminale:
				- se tra ("parole") stampo così com'è
				- se tra ("%d", a) inserisce e printa le variabili che ho dichiarato sopra (in questo caso variabile a ) */
  
  /*printf("%d = %d + %d\n\n", a, b, c ) ; 
      ^  ^    ^     ^ ^    ^  ^  ^
      |  |    |     | |    |  |  |
      |  |    |     | |    +--+--+-- argomenti in stampa
      |  |    |     | |
      |  |    |     | +------------ carattere non stampabile (ritorno a capo + avanza linea)
      |  |    |     |
      |  +----+-----+--- %d formattatore = prende argomento e lo stampa come intero
      |
      +------ chiama la funzione printf della libreria standard 
   */


/*
void to_binary( int aa, char str[33] );

to_binary----------> funzione che scrive qualcosa in codice binario, in questo caso
viene scritto un numero in un vettore stringa di 33 caratteri 

 Funzione (subroutine) che converte un intero in una stringa
   che rappresenta il numero in binario.
   Solo prototipo, prometto al compilatore che
   la funzione é da qualche altrsa parte

   OPERAZIONI MASCHERE BIT A BIT:

  - & operazione 'and' bit a bit
  - | operazione 'or' bit a bit
  - ^ operazione 'or esclusivo' bit a bit
  - ~ operazione 'complementazione' bit a bit
  
   0x  = prefisso per numeri in esadecimale
   0   = prefisso per numeri in ottale
   0b  = prefisso per numeri in binario

  Esempio:

   0b110101     =       0x35       =      065
   binario            esadecimale        ottale
   */

  /* 
   OPERATORI DI CONFRONTO
    == uguaglianza
    != diverso
    >= maggiore o uguale
    <= minore o uguale
    > maggiore
    < minore
  */