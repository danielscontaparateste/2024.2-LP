#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MX 100

int *alocarMemoria(unsigned int);
int **alocarMemoria2(unsigned int);
void popularVetor(int *, unsigned int);
void imprimirVetor(int *, unsigned int);
void organizarSequencia(int *, int **, unsigned);
int *getEndElem(int *, int, int);
void imprimirVetor2(int **, unsigned int);

int main(){

    unsigned n;
    puts("Digite a quantidade de elementos: ");
    scanf("%u",&n);

    srand(time(NULL));
    int *px = alocarMemoria(n);
    popularVetor(px, n);
    imprimirVetor(px, n);

    puts("=====");
    int **pp = alocarMemoria2(n);
    organizarSequencia(px,pp,n); 
    puts("\n\n===\n");
    imprimirVetor2(pp, n);
    
    return 0;
}

int *alocarMemoria(unsigned int qtd){
    int *p = NULL;
    if (!(p = (int*) malloc(qtd * sizeof(int)))){
        puts("Memória insuficiente");
        exit(1);
    }
    return p;
}

int **alocarMemoria2(unsigned int qtd){
    int **p = NULL;
    if (!(p = (int**) malloc(qtd * sizeof(int*)))){
        puts("Memória insuficiente");
        exit(1);
    }
    return p;
}

void popularVetor(int *p, unsigned int q){
    for (int k=0; k<q; k++) *(p+k) = rand() % MX;
} 

void imprimirVetor(int *p, unsigned int q){
    for (int k=0; k<q; k++){
        printf("[%p] %d\n",p+k, *(p+k));
    }
}

void imprimirVetor2(int **pp, unsigned int q){
    for (int k=0; k<q; k++){
        printf("[%p] %d\n",*(pp+k), *(*(pp+k)));
    }
}

void organizarSequencia(int *px, int **pp, unsigned qtd){
    int elem;
    for (int k=0; k<qtd; k++){
        puts("Digite os elementos na sequência proposta: ");
        scanf("%d",&elem);
        if (!(*(pp+k) = getEndElem(px, elem, qtd))){
            puts("Número Inválido");
            exit(2);
        }
    }
}

int *getEndElem(int *px, int elem, int qtd){
    for (int k=0; k<qtd; k++) if (*(px+k)==elem) return (px+k);
    return NULL;
}

