#include <stdio.h>
#include <sys/time.h> /* accedo a funzioni di sistema gettimeofday */
#include <stdlib.h>


struct timeval tbegin, tend;

static void start() { /*start time */ gettimeofday( &tbegin, NULL); }
static void stop() { /* end time */ gettimeofday( &tend, NULL); }

static /* voglio sapere il tempo passato */
double
elapsed()
{
    double elapsedTime;
    elapsedTime = (tend.tv_sec - tbegin.tv_sec) * 1000.0; // converto s in ms
    elapsedTime += (tend.tv_usec - tbegin.tv_usec) / 1000.0; // converto s in ms
    return elapsedTime;
}

int main()
{
    int max, i, j, a;
    printf("Calcolo numeri perfetti fino a: ");
    scanf ("%d", &max);

    start();

    for (a=2; a<=max; ++a)
    {
        if (a%2==0) //ottimizzo, prendo i pari
        { 
            for( j=0,i=1; i<=a/2; ++i )
            { if (a%i==0) j+=i; } 
        }

        if (a==j) //se quel n==somma di tutti i divisori ---> perfetto
        { printf("%d\n", a); }    
    }
    stop();  

    printf("Tempo di calcolo %g [ms]\n", elapsed());

   


    return 0;
}