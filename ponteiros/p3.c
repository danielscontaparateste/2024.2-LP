#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MX 100

int main(){
    unsigned char *pv = NULL;
    int *pz = NULL;

    unsigned n;

    // Tamanho do vetor
    puts("Entre com o tamanho do vetor: ");
    scanf("%u",&n);

    // Alocar memória dinamicamente
    pv = malloc(n * sizeof(unsigned char));
    if (!pv){
        puts("Memória insuficiente");
        exit(1);
    }

    pz = malloc(n * sizeof(int));
    if (!pz){
        puts("Memória insuficiente");
        exit(1);
    }

    srand(time(NULL));
    //Gerar os vetores
    for (int k=0; k<n; k++){
        *(pv+k) = rand() % MX;
        *(pz+k) = rand() % MX;
    }

    // Imprimir vetor 1
    puts("Vetor - unsigned char");
    for (int k=0; k<n; k++){
        printf("[%p] %hhu\n",pv+k,*(pv+k));
    }

    // Imprimir vetor 2
    puts("Vetor - int");
    for (int k=0; k<n; k++){
        printf("[%p] %d\n",pz+k,*(pz+k));
    }
    
    return 0;
}
