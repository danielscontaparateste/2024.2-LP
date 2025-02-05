#include <stdio.h>
#include <stdlib.h>

#define TAM 80

int main(){
    FILE *fp;
    char str[TAM];

    if (!(fp = fopen("strings.txt","w"))){
        puts("Erro ao abrir o arquivo");
        exit(1);
    }

    do{
        fputs("Digite um texto ", stdout);
        fgets(str, TAM, stdin);
        fputs(str, fp);
    }while(*str != '\n');


    // Exercício: Reutilize o arquivo para a leitura.

    fclose(fp);

    return 0;

}
