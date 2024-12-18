#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MX 100

void preencher(unsigned char *, unsigned, unsigned, int);
void imprimir(unsigned char *,int, int);

int main(){
    unsigned char *p = NULL;
    unsigned qLin, qCol;

    puts("Digite a quantidade de linhas: ");
    scanf("%u",&qLin);

    puts("Digite a quantidade de colunas: ");
    scanf("%u",&qCol);

    if (!(p = (unsigned char*) malloc(qLin * qCol *sizeof(unsigned char)))){
        puts("Memória indisponível");
        exit(1);
    }

    srand(time(NULL));
    
    preencher(p, qLin, qCol, MX);

    imprimir(p,qLin,qCol);

    // --- 

    int ci, cj;
    puts("Mostrar elemento em uma posição (i,j)");
    puts("Digite i: ");
    scanf("%d",&ci);
    puts("Digite j: ");
    scanf("%d",&cj);

    printf("Valor: %hhu\n",*(p + (ci * qCol + cj)));

    
    free(p);

    return 0;

}

void preencher(unsigned char *x, unsigned ql, unsigned qc, int mx){
    for (int k=0; k<ql*qc; k++) *(x+k) = rand() % mx;
}

void imprimir(unsigned char *x,int ql, int qc){
    for (int k=0; k<ql*qc; k++){
        printf("%3d\t",*(x+k));
        if (!( (k+1) % qc )) printf("\n");
    }
} 


