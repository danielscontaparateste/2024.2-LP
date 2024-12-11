#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MX 100
#define TAM 2

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

    // int *pMenor = NULL, *pMaior = NULL;

    // int *v[TAM] = {NULL, NULL};

    int **v = NULL;

    v = (int **) malloc(TAM * sizeof(int*));
    if (!v){
        puts("Memória Insuficiente");
        exit(2);
    }

    *v = p; // v[0] = p;
    *(v+1) = p;

    for (int k=1; k<n; k++){
        *v = (**v > *(p+k))?p+k:*v;
        *(v+1) = (*(*(v+1)) < *(p+k))?p+k:*(v+1);
    }

    printf("Endereço do Menor : %p\n",*v);
    printf("Endereço do Maior : %p\n",*(v+1));

    free(p);
    free(v);

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

