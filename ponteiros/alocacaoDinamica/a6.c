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
    
    // if (!(px = (int*) malloc(n * sizeof(int)))){
    //     puts("Não há memória disponível. ");
    //     exit(1);
    // }

    if (!(px = (int*) realloc(NULL, n * sizeof(int)))){
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
    // for (int k=0; k<3; k++){    
        printf("[%p] %d\n",px+k, *(px+k));
    }

    int novo_n; 
    puts("Entre com a NOVA quantidade de elementos: ");
    scanf("%d",&novo_n);

    px = (int*) realloc(px, novo_n * sizeof(int));
    //Verificar se o px retornado é NULL

    // Gerar NOVOS dados
    srand(time(NULL));
    for (int k=n; k<novo_n; k++){
        *(px+k) = INI + rand()%QTD;
    }
        
    //Exibir os dados
    // for (int k=0; k<novo_n; k++){
    for (int k=0; k<3; k++){        
        printf("[%p] %d\n",px+k, *(px+k));
    }
    
    free(px);

    return 0;

}