#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MX 10

void getEndParImpar(int *, int, int **);

int main(){
    int n;
    puts("Qual o tamanho do vetor? ");
    scanf("%d",&n);

    int *p = NULL;

    // Alocar memória para o vetor
    if (!(p = (int*) malloc(n * sizeof(int)))){
        puts("Não há memória disponível");
        exit(1);
    } 

    // Preencher o vetor
    srand(time(NULL));
    for (int k=0; k<n; k++){
        *(p+k) = rand() % MX;
    }

    // Exibir o vetor
    for (int k=0; k<n; k++){
       printf("[%p] %d\n" ,p+k,*(p+k));
    }

    
    // Alocar memória para o vetor resultante
    float *y = NULL;

    if (!(y = (float*) malloc(n * sizeof(float)))){
        puts("Não há memória disponível");
        exit(2);
    } 

    // Min-Max
    int menor=*p, maior=*p;

    for (int k=1; k<n; k++){
        menor = (*(p+k)<menor)?*(p+k):menor;
        maior = (*(p+k)>maior)?*(p+k):maior;
    }

    for (int k=0; k<n; k++){
        *(y+k) = ( (float) ( *(p+k) - menor ) ) / (maior - menor);
    }


    // Exibir o vetor resultante
    puts("Vetor resultante");
    for (int k=0; k<n; k++){
       printf("[%p] %.2f\n" ,y+k,*(y+k));
    }

    // 2a. Questão
    int *pv[2];
    getEndParImpar(p, n, pv);

    puts("===");
    if (*pv) printf("Par: [%p] - %d \n",*pv, **pv);
    if (*(pv+1)) printf("Impar: [%p] - %d \n",*(pv+1), *(*(pv+1)) );

    return 0;
}


void getEndParImpar(int *p, int t, int **q){

    // Par
    *q = NULL;
    for (int k=0; k<t; k++){
        if (!(*(p+k)%2)){
            *q = p+k;
            break;    
        }
    }

    // Impar
    *(q+1) = NULL;
    for (int k=0; k<t; k++){
        if (*(p+k)%2){
            *(q+1) = p+k;
            break;    
        }
    }

}