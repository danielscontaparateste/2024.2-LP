#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct ponto{
    int x;
    int y;
} Pts;

void imprimirPts(Pts *, int);

int main(int argc, char **argv){

    if (argc!=3){
        printf("Use: \n\t\t%s <nomeArquivo> <posicao>\n",argv[0]);
        exit(1);
    }

    FILE *fp;

    if (!(fp = fopen(argv[1],"rb"))){
        puts("Não foi possível abrir o arquivo. ");
        exit(1);
    }

    int pos = atoi(argv[2]);

    fseek(fp, pos * sizeof(Pts), SEEK_SET);

    Pts x;

    fread(&x, sizeof(Pts), 1, fp);

    imprimirPts(&x, 1);

    fclose(fp);

    return 0;

}

void imprimirPts(Pts *p, int t){
    for (int k=0; k<t; k++){
        puts("====");    
        printf("x = %d\n",(p+k)->x);
        printf("y = %d\n",(p+k)->y);
    }
}

// Exercício : O que acontece se o usuário digitar uma posição inexistente? Como resolver? 