#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 100
#define MAX 100

int main(){
    int x[TAM];

    srand(time(NULL));

    //Preencher o vetor
    for (int k=0; k<TAM; k++){
        x[k] = rand() % (MAX+1);
    }

    // Imprimir o vetor
    for (int k=0; k<TAM; k++){
        printf("%d, ",x[k]);
    }
    printf("\n");

    //Processamento
    int maior = x[0], menor = x[0];
    for (int k=1; k<TAM; k++){
        maior = (maior < x[k])?x[k]:maior;
        menor = (menor > x[k])?x[k]:menor;
    }

    // Saída: 
    printf("\t\tMaior: %d\n",maior);
    printf("\t\tMenor: %d\n",menor);
    

    return 0;
}