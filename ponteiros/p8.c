#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MX 100

void preencher(int **, int, int, int);
void imprimir(int **, int, int);
// int *getEndMaiorElemento(int **, int, int);
void getEndMaiorElemento2(int **, int, int, int **);

int main(){
    int **m;
    
    int qLin, qCol;
    puts("Digite a quantidade de linhas: ");
    scanf("%d",&qLin);

    puts("Digite a quantidade de colunas: ");
    scanf("%d",&qCol);

    //alocar memória
    if (!(m = (int**) malloc(qLin * sizeof(int*)))){
        puts("Memória insuficiente. ");
        exit(1);
    }

    for (int k=0; k<qLin; k++){
        if (!(*(m+k) = (int*) malloc(qCol * sizeof(int)))){
            puts("Memória insuficiente. ");
            exit(2);
        }
    }

    srand(time(NULL));
    preencher(m, qLin, qCol, MX);

    imprimir(m, qLin, qCol);

    
    // int *pMaior = getEndMaiorElemento(m, qLin, qCol);

    int *pMaior = NULL;
    getEndMaiorElemento2(m, qLin, qCol, &pMaior);

    printf("\n\t Endereço do maior elemento - 2: %p\n",pMaior);


    return 0;

}

void preencher(int **m, int ql, int qc, int mx){

    for (int k=0; k<ql; k++){
        for (int j=0; j<qc; j++){
            *(*(m+k) + j) = rand() % mx;
        }
    }

}

void imprimir(int **m, int ql, int qc){
    for (int k=0; k<ql; k++){
        for (int j=0; j<qc; j++){
            printf("[%p] %3d  ",*(m+k) + j,*(*(m+k) + j));
        }
        printf("\n");
    }
}

// int *getEndMaiorElemento(int **m, int ql, int qc){
//     int *pm = *m;

//     for (int k=0; k<ql; k++){
//         for (int j=0; j<qc; j++){
//             pm = (*pm < *(*(m+k)+j))?*(m+k)+j:pm;
//         }
//     }
//     return pm;
// }

void getEndMaiorElemento2(int **m, int ql, int qc, int **pm){
    // int *pm = *m;

    *pm = *m;
    for (int k=0; k<ql; k++){
        for (int j=0; j<qc; j++){
            *pm = (**pm < *(*(m+k)+j))?*(m+k)+j:*pm;
        }
    }
    
}