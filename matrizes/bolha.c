#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define VETOR_VALOR_MIN 0
#define VETOR_QTD 100

int main(){

    int x[TAM];

    // Geração de Dados
    srand(time(NULL));

    for (int k=0; k<TAM; k++){
        x[k] = VETOR_VALOR_MIN + (rand() % VETOR_QTD);
    }

    puts("Vetor gerado antes da ordenação: ");
    for (int k=0; k<TAM; k++){
        printf("%p - [%d] : %d\n",&x[k], k, x[k]);
    }

    // Processamento

    int cont = 0;
    int flag = 1;
    for (int k=0; k<TAM; k++){
        flag = 1;
        for (int j=0; j<TAM-1; j++){
            if (x[j]>x[j+1]){
                // Realizar a troca 
                x[j] = x[j] ^ x[j+1];
                x[j+1] = x[j] ^ x[j+1];
                x[j] = x[j] ^ x[j+1];

                flag = 0;
            }
        }
        if (flag) break;
        cont++;
    }

    // Saída 
    puts("Vetor gerado DEPOIS da ordenação: ");
    for (int k=0; k<TAM; k++){
        printf("%p - [%d] : %d\n",&x[k], k, x[k]);
    }

    printf("\n\n\t\tQuantidade de iterações: %d\n\n\n",cont);

    return 0;

}