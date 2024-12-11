#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 30
#define RG 100

int main(){

    int v[TAM];
    
    srand(time(NULL));

    // Gerar Dados
    for (int k=0; k<TAM; k++){
        v[k] = rand() % RG;
    }

    // Imprimir o vetor
    puts("Vetor não ordenado");
    for (int k=0; k<TAM; k++){
        printf("%p - [%d] : %d\n",&v[k], k, v[k]);
    }
 
    // Processamento - Ordenação Crescente - Ordenação por Seleção
    int aux;
    for (int k=0; k<TAM-1; k++){
        for(int j=k+1; j<TAM; j++){
            if (v[k]>v[j]){
                aux = v[k];
                v[k] = v[j];
                v[j] = aux;
            }
        }
    }

    puts("Vetor ordenado");
    for (int k=0; k<TAM; k++){
        printf("%p - [%d] : %d\n",&v[k], k, v[k]);
    }

    return 0;
}