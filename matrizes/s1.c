#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define QL 5
#define QC 3

#define MX 10

int main(){
    unsigned m[QL][QC]; //unsigned int

    srand(time(NULL));

    //Preencher a matriz
    for (int k=0; k<QL; k++){
        for (int j=0; j<QC; j++){
            m[k][j] = rand() % MX;
        }
    }

    // Imprimir a Matriz
    for (int k=0; k<QL; k++){
        for (int j=0; j<QC; j++){
            printf("%2d\t",m[k][j]);
        }
        printf("\n");
    }

    // Entre com um número
    unsigned n;

    puts("Digite o número a ser buscado: ");
    scanf("%u",&n);

    // Buscar e contar as ocorrências
    unsigned qtd = 0;
    for (int k=0; k<QL; k++){
        for (int j=0; j<QC; j++){
            qtd += (m[k][j]==n)?1:0;
        }
    } 
    
    puts("===");
    printf("Qtd de ocorrências de %u na matriz: %u\n",n, qtd);

    return 0;
}
