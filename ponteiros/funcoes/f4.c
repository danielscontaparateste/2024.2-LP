#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define INI 0 
#define QTD 100

int *alocarMemoria(int *const, int);
void preencherVetor(int *const, int, int, int, int);
void exibirVetor(const int *const, int);

int getMaiorValor(const int *const, const int);
int getMenorValor(const int *const, const int);

int getValor( int (*pF) (const int *, const int), const int *const, const int);

typedef int (*Func)();

int main(int argc, char **argv){
	
	if (argc!=3){
        printf("Formato:\n\t\t %s <tamanhoVetor> <0:maior|1:menor>\n\n",*argv);
        exit(1);
    }

    const int n = atoi(*(argv+1));
    const int op = atoi(*(argv+2));

    // Alocação de memória
    int *const px = alocarMemoria(NULL, n);
    srand(time(NULL));
    preencherVetor(px, 0, n, 0, 10);
    exibirVetor(px, n);

    Func v[] = {getMaiorValor, getMenorValor};
	
    int valor = getValor(v[op], px, n);

    printf("\n");
    printf("Valor: %d\n", valor);

	// calcular( v[op], n1, n2, &r);
	// printf("resultado = %d\n",r);

	return 0;
}

int *alocarMemoria(int *const p, int t){
    int *pr;
    if (!(pr = (int*) realloc(p, t * sizeof(int)))){
        puts("Não há memória disponível. ");
        exit(1);
    }
    return pr;
}

void preencherVetor(int *const p, int pos_inicial, int t, int i, int q){
    for (int k=pos_inicial; k<t; k++){
        *(p+k) = i + rand()%q;
    }
}

void exibirVetor(const int *const p, int t){
    for (int k=0; k<t; k++){
        printf("[%p] %d\n",p+k, *(p+k));
    }
}

int getMaiorValor(const int *const p, const int t){
    int v;
    v = *p;
    for (int k=0; k<t; k++) v = (v < *(p+k))?*(p+k):v;
    return v;    
}

int getMenorValor(const int *const p, const int t){
    int v;
    v = *p;
    for (int k=0; k<t; k++) v = (v > *(p+k))?*(p+k):v;
    return v;
}    

int getValor( int (*pF) (const int *, const int), const int *const p, const int t){
	return (*pF)(p,t);
}