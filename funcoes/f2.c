#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MX 10

//  ./program.e <largura> <altura>

int **alocarMemoriaMatriz(int, int);
void popularMatriz(int **, int, int);
void imprimirMatriz(int **pm, const int, const int);

int main(int argc, char **argv){

    if (argc!=3){
        printf("Use:\n\t\t %s <largura> <altura>\n\n",argv[0]);
        exit(1);
    }

    int largura = atoi(*(argv+1)); 
    int altura = atoi(*(argv+2));

    int **matriz = alocarMemoriaMatriz(largura, altura);
    
    srand(time(NULL));
    popularMatriz(matriz, largura, altura);
    
    puts("Matriz Gerada");
    imprimirMatriz(matriz, largura, altura);
    
    return 0;
    
}

int **alocarMemoriaMatriz(int largura, int altura){
    int **pm = NULL;

    if (!(pm = (int **) malloc(altura * sizeof(int *)))){
        puts("Memória indisponível");
        exit(3);
    }
    for (int k=0; k<altura; k++){
        pm[k] = (int *) malloc(largura * sizeof(int));
    }

    return pm;
} 

void popularMatriz(int **pm, int largura, int altura) {
    for (int k=0; k<altura; k++){
        for (int j=0; j<largura; j++){
            *(*(pm+k) + j) = rand() % MX;
        }
    }
}

void imprimirMatriz(int **pm, const int largura, const int altura){
    for (int k=0; k<altura; k++){
        for (int j=0; j<largura; j++){
            printf("%4d",*(*(pm+k) + j));
        }
        printf("\n");
    }
}

