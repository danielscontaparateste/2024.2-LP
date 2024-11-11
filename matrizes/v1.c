#include <stdio.h>
#include <stdlib.h>

#define TAM 3

int main(){
    int x[TAM], y[TAM], d[TAM];

    //Entrada de Dados

    puts("Entre com os valores de X: ");
    for (int k=0; k<TAM; k++){
        scanf("%d",&x[k]);
    }

    puts("Entre com os valores de Y: ");
    for (int k=0; k<TAM; k++){
        scanf("%d",&y[k]);
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
        printf("%d e %d = %d\n",x[k],y[k],d[k]);
    }

    puts("====");
    printf("A menor distância entre os pontos é : %d\n",menorDistancia);


    return 0;

}