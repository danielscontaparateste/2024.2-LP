#include <stdio.h>

typedef struct Estrutura{
    char x;
    char y;
    char a;
    char b;
    int z;
    float f;
} EST;

int main(){
    EST e1;

    printf("%lu\n",sizeof(e1));

    return 0;
}