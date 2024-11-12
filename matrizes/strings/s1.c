#include <stdio.h>
#include <string.h>

#define TAM 3

int main(){
    char str[TAM];

    puts("Digite o seu nome: ");
    // gets(str);
    fgets(str, TAM, stdin);
    // scanf("%[^\n]s",str);

    printf("Nome: %s\n",str);

    puts("====");

    // Contar a quantidade de caracteres válidos
    unsigned qtdCaracteresValidos=0, k=0;
    while(str[k++]!='\0') qtdCaracteresValidos++;
    
    printf("Qtd. de caracteres válidos: %u - %lu\n",qtdCaracteresValidos, strlen(str));

    // for (int k=0; k<TAM; k++){
    //     printf("[%p] %d\n",&str[k], str[k]);
    // }

    return 0;
}