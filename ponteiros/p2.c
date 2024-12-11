#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 3
#define MX 100

int main(){
    unsigned char v[TAM];
    int z[TAM];

    srand(time(NULL));
    //Gerar os vetores
    for (int k=0; k<TAM; k++){
        *(v+k) = rand() % MX;
        *(z+k) = rand() % MX;
    }

    // Imprimir vetor 1
    puts("Vetor - unsigned char");
    for (int k=0; k<TAM; k++){
        printf("[%p] %hhu\n",v+k,*(v+k));
    }

    // Imprimir vetor 2
    puts("Vetor - int");
    for (int k=0; k<TAM; k++){
        printf("[%p] %d\n",z+k,*(z+k));
    }



    return 0;
}
