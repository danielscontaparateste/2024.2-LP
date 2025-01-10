#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MX 10

//  ./program.e <largura> <altura>

int **alocarMemoriaMatriz(int, int);
void popularMatriz(int **, int, int);
void imprimirMatriz(int **pm, const int, const int);
void multMatPonto(int **, int **, int **, int, int);

int main(int argc, char **argv){

    if (argc!=3){
        printf("Use:\n\t\t %s <largura> <altura>\n\n",argv[0]);
        exit(1);
    }

    int largura = atoi(*(argv+1)); 
    int altura = atoi(*(argv+2));

    //#####

    int **matrizA = alocarMemoriaMatriz(largura, altura);
    if (!matrizA){
        puts("Memória Indisponível");
        exit(1);
    }
    
    srand(time(NULL));
    popularMatriz(matrizA, largura, altura);
    
    puts("Matriz Gerada A");
    imprimirMatriz(matrizA, largura, altura);

    //#####

    int **matrizB = alocarMemoriaMatriz(largura, altura);
    if (!matrizB){
        puts("Memória Indisponível");
        exit(1);
    }    
        
    popularMatriz(matrizB, largura, altura);
    puts("Matriz Gerada B");
    imprimirMatriz(matrizB, largura, altura);
    
    //#####

    int **matrizC = alocarMemoriaMatriz(largura, altura);
    if (!matrizC){
        puts("Memória Indisponível");
        exit(1);
    }

    multMatPonto(matrizA, matrizB, matrizC, largura, altura);

    puts("Matriz Resultante C");
    imprimirMatriz(matrizC, largura, altura);

    return 0;
    
}

int **alocarMemoriaMatriz(int largura, int altura){
    int **pm = NULL;

    if (!(pm = (int **) malloc(altura * sizeof(int *)))){
        // puts("Memória indisponível");
        return NULL;
    }
    for (int k=0; k<altura; k++){
        if (!(pm[k] = (int *) malloc(largura * sizeof(int)))) return NULL;
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

void multMatPonto(int **a, int **b, int **c, int larg, int alt){
    for (int k=0; k<alt; k++){
        for (int j=0; j<larg; j++){
            *(*(c+k)+j) = *(*(a+k)+j) * *(*(b+k)+j);
        }
    }
}

