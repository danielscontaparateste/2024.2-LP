#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5
#define MX 100

typedef struct ponto{
    int x;
    int y;
} Pts;

void imprimirPts(Pts *, int);

int main(){
    Pts vp[TAM];

    srand(time(NULL));
    for (int k=0; k<TAM; k++){
        vp[k].x = rand() % MX;
        vp[k].y = rand() % MX;
    }

    imprimirPts(vp, TAM);

    FILE *fp;

    if (!(fp = fopen("dados.dat","wb"))){
        puts("Não foi possível criar o arquivo. ");
        exit(1);
    }

    fwrite(vp, sizeof(Pts), TAM, fp);

    

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