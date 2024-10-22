#include <stdio.h>

/*
Comentários de 
múltiplas 
linhas
*/

// Comentário de linha
int main(){
    int x; 
    
    printf("char: %lu byte\n", sizeof(char));
    printf("int: %lu bytes\n", sizeof(x)); //int
    printf("unsigned int: %lu bytes\n", sizeof(unsigned int));
    printf("short int : %lu bytes\n", sizeof(short int));
    printf("long int: %lu bytes\n", sizeof(long int));
    printf("long long int: %lu bytes\n", sizeof(long long int));
    printf("float: %lu bytes\n", sizeof(float));
    printf("double: %lu bytes\n", sizeof(double));
    
    return 0;
}