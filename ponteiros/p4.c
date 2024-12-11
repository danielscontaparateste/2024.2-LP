#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MX 100

void preencher(int *pv, int q);
void imprimir(int *pv, int q);

int main(){
    int n;
    int *p = NULL;

    puts("Entre com a quantidade de elementos: ");
    scanf("%d",&n);

    p = (int*) malloc(n * sizeof(int));

    if (!p) {
        puts("Memória insuficiente!");
        exit(1);
    }

    srand(time(NULL));
    preencher(p, n);
    imprimir(p, n);

    int *pMenor = NULL, *pMaior = NULL;

    pMenor = p;
    pMaior = p;

    for (int k=1; k<n; k++){
        pMenor = (*pMenor > *(p+k))?p+k:pMenor;
        pMaior = (*pMaior < *(p+k))?p+k:pMaior;
    }

    printf("End. do Menor : %p\n",pMenor);
    printf("End. do Maior : %p\n",pMaior);

    free(p);

    return 0;
}

void preencher(int *pv, int q){
    
    for (int k=0; k<q; k++){
        *(pv+k) = rand() % MX;
        // pv[k] = rand() % MX;
    }
}

void imprimir(int *pv, int q){
    for (int k=0; k<q; k++){
        printf("[%p] %d\n",pv+k, *(pv+k));
    }
}

