#include <stdio.h>
#include <stdlib.h>

int inserisci_elemento(int *vett, int *ind)
{
    int n=0;       
    char s[5]; //numero con massimo 5 cifre
    printf("Inserire un numero\n");
    scanf(" %s",s);
    if(s[0]=='f')
        return 1;  
    n=atoi(s);
    vett[(*ind)++]=n;
    return 0;
}

void stampa_vettore(int vett[],int ind)
{
    int i;
    if (ind==0)
    {
        printf("Vettore nullo\n");
        return;
    }
    printf("il vettore selezionato e':\n[");
    for( i=0; i<ind-1; ++i)
        printf("%d, ",vett[i]);
    printf("%d]\n\n",vett[i]);       
}

void bubble(int vett[],int size)
//  confronto il numero i-esimo con il successivo 
//  ed eventualmente li scambio  
{
    int i,j,t;
    for(j=0; j<size-1; j++)
        for(i=0; i<size-j-1; i++)
            if(vett[i]>vett[i+1])
            {
               t=vett[i];   
               vett[i]=vett[i+1];
               vett[i+1]=t;
            }
    
}
void insert(int vett[],int size)
//  confronto il numero i-esimo con tutti
//  i precedenti e lo posiziono correttamente
{
    int i,j,k,t;
    for(i=0; i<size; i++)
        for(j=0; j<i; j++)
            if(vett[i]<vett[j])
            {   
                int v[i-j+1];
                v[0]=vett[i];
                for(k=0;k+1<=i-j;k++)
                    v[k+1]=vett[j+k];
                for(k=0;k<=i-j;k++)
                    vett[j+k]=v[k];
            }
}

void selet(int vett[],int size)
//  seleziono ogni volta il numero minore 
//  tra i rimanenti e lo metto in testa
{
    printf("Ordino il vettore utilizzando la funzione seletion sort:\n");
    int i,j,ind,t;
    for(i=0; i<size-1; i++)
    {
        ind=i;
        for(j=i+1; j<size; j++)
            if (vett[j]<vett[ind])
                ind=j;
        t=vett[ind];   
        vett[ind]=vett[i];
        vett[i]=t;
    }
}

void scelta_algoritmo(int ve[],int taglia)
{
    char a;
    int x=0;
    do
    {
        printf("Sceglere algoritmo di ordinamento:\n\n");
        printf("-cliccare 'b' per ordinare gli elementi con bubble sort\n");
        printf("-cliccare 'i' per ordinare gli elementi con insertion sort\n");
        printf("-cliccare 's' per ordinare gli elementi con seletion sort\n");
        scanf(" %c",&a);
        switch (a)
        {
        case 'b':
            bubble(ve,taglia);
            x=1;
            break;
        case 'i':
            insert(ve,taglia);
            x=1;
            break;
        case 's':
            selet(ve,taglia);
            x=1;
            break;
        default:
        printf("ti do un'altra possibilita' ma sei un baucco, leggi meglio!\n");
            break;
        }
    } while (x==0);
    
}

int main()
{
    int v[30];
    int ind=0;
    int fine=0;
    while(fine==0 && ind<30)
    {
        fine=inserisci_elemento(v,&ind);
        stampa_vettore(v,ind);
    }
    //completato il while la variabile ind è la taglia del vettore (cioè l'indice del suo ultimo elemento) 
    scelta_algoritmo(v,ind);
    stampa_vettore(v,ind);
    return 0;
}