#include <stdio.h>
#include <stdlib.h>
const int DIM = 6;
int main(int argc, char** argv) {
    int i, max, min, somma, pdr = 0;
    float media;
    int vettore[DIM];
    printf("Inserisci l'età di %d persone\n", DIM);
    for (i = 0; i < DIM; i++) {
        printf("Inserisci l'eta' della %da persona : ", i + 1);
        scanf("%d", &(vettore[i]));
    }
    i = 0;
    max = vettore[i];
    min = vettore[i];
    somma = vettore[i];
    i++;
    for (; i < DIM; i++) {
        if (vettore[i] > max) {
            max = vettore[i];
        }
        else {
            if (vettore[i] < min) {
            min = vettore[i];
            }
        }
        somma = somma + vettore[i];
        if (vettore[i] > 49) {
            pdr++;
        }
    }
    media = somma / DIM;
    printf("Eta' media : %f\n", media);
    printf("Eta' massima : %d\n", max);
    printf("Eta' minima : %d\n", min);
    printf("Numero di potenziali Presidenti della Repubblica : %d", pdr);
    
    return (EXIT_SUCCESS);
}

