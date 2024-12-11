#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5
#define VETOR_VALOR_MIN 0
#define VETOR_QTD 100

int main(){

    int x[TAM];

    // Geração de Dados
    srand(time(NULL));

    for (int k=0; k<TAM; k++){
        x[k] = VETOR_VALOR_MIN + (rand() % VETOR_QTD);
    }

    puts("Vetor gerado: ");
    for (int k=0; k<TAM; k++){
        printf("%p - [%d] : %d\n",&x[k], k, x[k]);
    }

    // Processamento
    int aux;
    for (int k=0; k<TAM/2; k++){
        aux = x[TAM-1-k];
        x[TAM-1-k] = x[k];
        x[k] = aux;
    }

    // Saída 
    puts("Vetor invertido: ");
    for (int k=0; k<TAM; k++){
        printf("%p - [%d] : %d\n",&x[k], k, x[k]);
    }

    return 0;

}