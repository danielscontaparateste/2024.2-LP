#include <stdio.h>

int main(){

    // int x;
    // int y;
    
    // int x = 7, y = 2;
    // int x, y;
    // x = y = 10;

    int x, y;

    puts("Digite o valor de x: ");
    scanf("%d",&x);

    puts("Digite o valor de y: ");
    scanf("%d",&y);
    
    float c;
    c = ((float) x) / y;
    
    
    printf("Resultado da operação de %d com %d: %.2f\n", x, y, c);

    // Exemplos de uso do sizeof()
    printf("=====\n");

    printf("float: %lu bytes\n", sizeof(c));
    printf("int: %lu bytes\n", sizeof(x));
    printf("double: %lu bytes\n", sizeof(double));
    printf("long double: %lu bytes\n", sizeof(long double));
    printf("unsigned long int: %lu bytes\n", sizeof(unsigned long int));
    printf("unsigned long long int: %lu bytes\n", sizeof(unsigned long long int));
    printf("unsigned short int: %lu bytes\n", sizeof(unsigned short int));
    
    return 0;
}