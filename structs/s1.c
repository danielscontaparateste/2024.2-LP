#include <stdio.h>
#include <stdlib.h>

struct aluno{
    float nota1;
    float nota2;
    float media;
};

// float calcularMedia(const float, const float);
// struct aluno calcularMedia(struct aluno);
void calcularMedia(struct aluno *const);

int main(int argc, char **argv){

    if (argc!=3){
        printf("Use:\n\t %s <nota1> <nota2>\n\n",*argv);
        exit(1);
    }

    struct aluno a1;

    a1.nota1 = atof(*(argv+1));
    a1.nota2 = atof(*(argv+2));

    // a1.media =  calcularMedia(a1.nota1, a1.nota2);
    calcularMedia(&a1);

    printf("Média do aluno : %.2f\n", a1.media);

    return 0;
}

// float calcularMedia(const float n1, const float n2){
//     return (n1+n2)/2; 
// }

// float calcularMedia(const struct aluno a){
//     return (a.nota1+a.nota2)/2; 
// }

// struct aluno calcularMedia(struct aluno a){
//     a.media = (a.nota1+a.nota2)/2; 
//     return a;
// }

// void calcularMedia(struct aluno *const p){
//     (*p).media = ((*p).nota1 + (*p).nota2) / 2;
// }

void calcularMedia(struct aluno *const p){
    p->media = (p->nota1 + p->nota2) / 2;
}