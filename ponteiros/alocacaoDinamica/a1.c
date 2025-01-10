#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define VAR_NUM 100
#define INI 0

int main(){
    int *pv = NULL; 
    int qtd;

    puts("Entre com o tamanho do vetor: ");
    scanf("%d",&qtd);
    
    pv = malloc(qtd * sizeof(int));

    if (!pv){
        puts("Não há memória disponível. ");
        exit(1);
    }
    
    // Gerar dados
    srand(time(NULL));
    for (int k=0; k<qtd; k++){
        *(pv+k) = INI + rand() % VAR_NUM; 
    }

    // Exibir dados
    for (int k=0; k<qtd; k++){
        printf("[%p] %d - %d \n",pv+k,*(pv+k),pv[k]);
    }

    free(pv);
    
    return 0;
}