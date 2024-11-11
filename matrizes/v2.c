#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5
#define INI 0
#define MX 100

int main(){
    int x[TAM], y[TAM], d[TAM];

    //Entrada de Dados

    srand(time(NULL));

    // puts("Entre com os valores de X: ");
    for (int k=0; k<TAM; k++){
        // scanf("%d",&x[k]);
        x[k] = INI + rand() % MX;
    }

    // puts("Entre com os valores de Y: ");
    for (int k=0; k<TAM; k++){
        // scanf("%d",&y[k]);
        y[k] = INI + rand() % MX;
    }

    // Processamento
    for (int k=0; k<TAM; k++){
        d[k] = abs(x[k] - y[k]);
    }
    
    int menorDistancia = d[0];
    for (int k=1; k<TAM; k++){
        menorDistancia = (menorDistancia > d[k])?d[k]:menorDistancia;
    }

    //Saída

    puts("Distancias: ");
    for (int k=0; k<TAM; k++){
        printf("[%p] %d e [%p] %d\t=\t[%p] %d\n",&x[k], x[k],&y[k], y[k],&d[k], d[k]);
    }

    puts("====");
    printf("A menor distância entre os pontos é : %d\n",menorDistancia);


    return 0;

}