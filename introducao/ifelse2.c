#include <stdio.h>
#include <stdlib.h>

int main(){
    int x;

    puts("Digite um número: ");
    scanf("%d",&x);

    // Validação 
    if (x%2) {
        puts("Valor de entrada incorreto. ");
        exit(1);
        // return 1;
    }
    // Processamento e Saída
    printf("Valor de entrada: %d\n",x);

    // if (!(x%2)){
    //     printf("Valor de entrada: %d\n",x);
    // }else{
    //     puts("Valor de entrada incorreto. ");
    // }

    return 0;

}