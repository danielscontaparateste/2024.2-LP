#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MX 100

int *alocarMemoria(unsigned int);
void popularVetor(int *, unsigned int);
void imprimirVetor(int *, unsigned int);
unsigned contarDivisiveis(int *, unsigned, int);
void getDivisiveis(const int *const, unsigned, int , int *);

int main(){

    unsigned int quantidadeElementos;
    puts("Qual a quantidade de elementos? ");
    scanf("%u",&quantidadeElementos);

    int *d = alocarMemoria(quantidadeElementos);
    popularVetor(d, quantidadeElementos);
    imprimirVetor(d, quantidadeElementos);

    int div;
    puts("Digite o valor do divisor: ");
    scanf("%d",&div);

    unsigned quantidadeDivisiveis = contarDivisiveis(d, quantidadeElementos, div);

    int *z = alocarMemoria(quantidadeDivisiveis);

    getDivisiveis(d, quantidadeElementos, div, z);

    puts("Vetor de divisíveis: ");
    imprimirVetor(z, quantidadeDivisiveis);


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

void popularVetor(int *p, unsigned int q){
    for (int k=0; k<q; k++) *(p+k) = rand() % MX;
} 

void imprimirVetor(int *p, unsigned int q){
    for (int k=0; k<q; k++){
        printf("[%p] %d\n",p+k, *(p+k));
    }
}

unsigned contarDivisiveis(int *p, unsigned q, int y){
    unsigned qd = 0;
    for (int k=0; k<q; k++){
        qd += (*(p+k)%y)?0:1;
    }
    return qd;
}  

void getDivisiveis(const int *const pd, unsigned q, int y, int *pz){
    int j=0;
    for (int k=0; k<q; k++){
        if (!(*(pd+k)%y)) {
            *(pz+j) = *(pd+k);
            j++;
        }
     }
}
