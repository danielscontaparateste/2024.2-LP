#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define Q 3


#define MX 10

int main(){
    float m[Q][Q]; 

    srand(time(NULL));

    //Preencher a matriz
    for (int k=0; k<Q; k++){
        for (int j=0; j<Q; j++){
            m[k][j] = ( (float) rand() / RAND_MAX) * MX;
        }
    }

    // Imprimir a Matriz
    for (int k=0; k<Q; k++){
        for (int j=0; j<Q; j++){
            printf("%.2f\t",m[k][j]);
        }
        printf("\n");
    }

    // Somar diagonal
    float s = 0;
    
    for (int k=0; k<Q; k++){
        s += m[k][Q-1-k];
    } 
    
    puts("===");
    printf("Somatório da Diagonal secundária: %.2f\n",s);

    return 0;
}