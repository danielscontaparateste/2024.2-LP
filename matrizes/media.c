#include <stdio.h>

#define QTD_NOTAS 3

int main(){

    float notas[QTD_NOTAS];

    // Entrada de Dados
    for (int k=0; k<QTD_NOTAS; k++){
        printf("Digite a Nota %d\n",k+1);
        scanf("%f",&notas[k]);
    }

    //Processamento
    float soma = 0.0, media;
    for (int k=0; k<QTD_NOTAS; k++){
        soma += notas[k];
    }
    media = soma/QTD_NOTAS;

    // float media=0.0;
    // for (int k=0; k<QTD_NOTAS; k++){
    //     media += notas[k]/QTD_NOTAS;
    // }

    // Saída
    printf("\t\t -> A média é: %.2f\n\n",media);
    
    return 0;
}