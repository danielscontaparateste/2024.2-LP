#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MX 10

//  ./program.e <largura> <altura>

int main(int argc, char *argv[0]){

    if (argc!=3){
        printf("Use:\n\t\t %s <largura> <altura>\n\n",argv[0]);
        exit(1);
    }

    if ( (atoi(argv[1])<0) || (atoi(argv[2])<0)){
        puts("erro");
        exit(2);
    } 

    unsigned int largura = atoi(argv[1]); 
    unsigned int altura = atoi(argv[2]);

    int **pm = NULL;

    if (!(pm = (int **) malloc(altura * sizeof(int *)))){
        puts("Memória indisponível");
        exit(3);
    }
    for (int k=0; k<altura; k++){
        pm[k] = (int *) malloc(largura * sizeof(int));
    }

    srand(time(NULL));
    for (int k=0; k<altura; k++){
        for (int j=0; j<largura; j++){
            *(*(pm+k) + j) = rand() % MX;
        }
    }

    for (int k=0; k<altura; k++){
        for (int j=0; j<largura; j++){
            printf("%4d",*(*(pm+k) + j));
        }
        printf("\n");
    }

    return 0;
    
}