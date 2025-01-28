#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct aluno{
    float *pNotas;
    float media;
};

void calcularMedia(const float *const, unsigned, float *const);
void imprimirNotas(const float *const, unsigned);

// int main(int argc, char **argv){
int main(int argc, char *argv[]){

    if (argc!=2){
        printf("Use:\n\t %s <quantidade_notas>\n\n",*argv);
        exit(1);
    }

    struct aluno a1;

    unsigned qtdNotas = atoi(*(argv+1));

    // alocar memória para as notas
    if (!(a1.pNotas = (float*) malloc(qtdNotas * sizeof(float)))){
        puts("Não memória disponível");
        exit(1);
    }
 
    srand(time(NULL));
    for (int k=0; k < qtdNotas; k++){
        *(a1.pNotas+k) = (( (float) rand())/RAND_MAX) * 10;
        // a1.pNotas[k] = (( (float) rand())/RAND_MAX) * 10;
    }
    
    imprimirNotas(a1.pNotas, qtdNotas);

    calcularMedia(a1.pNotas, qtdNotas, &a1.media);

    printf("Média - aluno : %.2f\n", a1.media);

    return 0;
}


void calcularMedia(const float *const p, unsigned qtdNotas, float *const pmedia){
    *pmedia = 0.0;
    for (int k=0; k<qtdNotas; k++){
        *pmedia += *(p+k)/qtdNotas;
    }
}

void imprimirNotas(const float *const p, unsigned qtdNotas){
    for (int k=0; k<qtdNotas; k++){
        printf("[%p] Nota %d : %.2f\n",p+k, k+1, *(p+k));
    }
}