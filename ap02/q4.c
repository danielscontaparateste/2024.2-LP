#include <stdio.h>
#include <string.h>

#define MX 80

unsigned int countChar(char *, char);

int main(){

    char str[MX];
    char ch;

    puts("Entre com uma string: ");
    fgets(str, MX, stdin);

    puts("Digite o caractere a ser buscado: ");
    scanf("%c",&ch);

    printf("Quantidade de ocorrências: %u\n", countChar(str, ch));


    return 0;

}

unsigned int countChar(char *s, char c){

    int k=0;
    unsigned contador = 0;
    while(*(s+k)!='\0'){
        if (*(s+k)==c){
            contador++;
        }
        k++;
    }

    return contador;

}