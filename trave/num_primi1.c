#include <stdio.h>
#include <sys/time.h> /* accedo a funzioni di sistema gettimeofday */


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
    int n, i, j;
    printf("Calcolo se un numero è perfetto\n");
    printf("Inserire numero: ");
    scanf ("%d", &n);

    start();

    for( j=0, i=1; i<=n/2; ++i )
    {
        if (n%i==0)
        {
            //printf("%d\n", i);
            j+=i;
            //printf("%d\n", j);
        }
    }   
    stop();  

    if (n==j) //se quel n==somma di tutti i divisori ---> perfetto
    { printf("\n%d è un numero perfetto\n", n); }
    else
    { printf("\n%d non è un numero perfetto\n", n); }
    printf("Tempo di calcolo %g [ms]\n", elapsed());

   


    return 0;
}