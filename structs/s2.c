#include <stdio.h>
#include <stdlib.h>

#define QTD_NOTAS 3

struct aluno{
    float notas[QTD_NOTAS];
    float media;
};

void calcularMedia(const float *const, unsigned, float *const);
void imprimirNotas(const float *const, unsigned);

// int main(int argc, char **argv){
int main(){

    struct aluno a1;

    for (int k=0; k < QTD_NOTAS; k++){
        a1.notas[k] = (( (float) rand())/RAND_MAX) * 10;
    }
    
    imprimirNotas(a1.notas, QTD_NOTAS);

    calcularMedia(a1.notas, QTD_NOTAS, &a1.media);

    printf("Média do aluno : %.2f\n", a1.media);

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