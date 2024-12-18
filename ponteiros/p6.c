#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIN 5
#define COL 10 

#define MX 100
#define ORIG 0

void preencherMatriz(char x[][COL], int, int, int, int);
void imprimirMatriz1(char x[][COL],int, int);
void imprimirMatriz2(char *,int, int);

int main(){
    char m[LIN][COL];
    char *p = m[0];

    srand(time(NULL));
    preencherMatriz(m, LIN, COL, ORIG, MX);


    // for (int k=0; k<LIN; k++){
    //     for (int j=0; j<COL; j++){
    //         m[k][j] = ORIG + rand() % MX;
    //     }
    // }

    puts("Visualização 1 - Função 1");
    imprimirMatriz1(m,LIN,COL);

    // for (int k=0; k<LIN; k++){
    //     for (int j=0; j<COL; j++){
    //         printf("%3d\t",m[k][j]);
    //     }
    //     printf("\n");
    // }

    puts("Visualização 2 - Função 2");
    imprimirMatriz2(p,LIN, COL);
    // for (int k=0; k<LIN*COL; k++){
    //     printf("%3d\t",*(p+k));
    //     if (!( (k+1) % COL )) printf("\n");
    // }
    
    return 0;

}

void preencherMatriz(char x[][COL], int ql, int qc, int orig, int mx){
    for (int k=0; k<ql; k++){
        for (int j=0; j<qc; j++){
            x[k][j] = orig + rand() % mx;
        }
    }
}

void imprimirMatriz1(char x[][COL],int ql, int qc){
    for (int k=0; k<ql; k++){
        for (int j=0; j<qc; j++){
            printf("%3d\t",x[k][j]);
        }
        printf("\n");
    }
} 

void imprimirMatriz2(char *x,int ql, int qc){
    for (int k=0; k<ql*qc; k++){
        printf("%3d\t",*(x+k));
        if (!( (k+1) % qc )) printf("\n");
    }
} 

