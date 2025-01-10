#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define INI 0 
#define QTD 100

int main(){
    int n;
    int *px = NULL;

    puts("Entre com a quantidade de elementos: ");
    scanf("%d",&n);

    // Alocação de memória
    
    if (!(px = (int*) malloc(n * sizeof(int)))){
        puts("Não há memória disponível. ");
        exit(1);
    }

    // Gerar os dados
    srand(time(NULL));
    for (int k=0; k<n; k++){
        *(px+k) = INI + rand()%QTD;
    }

    //Exibir os dados
    for (int k=0; k<n; k++){
        printf("[%p] %d\n",px+k, *(px+k));
    }

    // Processamento
    // int *pMenor = NULL, *pMaior = NULL;  
    int *pv[2];  // Posicao 0: Menor | Posicao 1: Maior
    
    *pv = *(pv+1) = px;
    for (int k=1; k<n; k++){
        if (**pv > *(px+k)) *pv = px+k;
        if (*(*(pv+1)) < *(px+k)) *(pv+1) = px+k;
    }
    
    // Saída
    // printf("Menor: [%p]\nMaior [%p] \n", pMenor, pMaior);
    printf("Menor: %d - [%p] \nMaior: %d - [%p] \n", **pv, *pv, *(*(pv+1)), *(pv+1));

    return 0;

}