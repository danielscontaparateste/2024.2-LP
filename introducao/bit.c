#include <stdio.h>

int main(){
    unsigned char cod = 14;
    unsigned char pos = 3;
    unsigned char mask = 0x01;

    //Processamento
    cod = cod ^ (mask << (pos-1)); 

    printf("Código atualizado: %hhu\n",cod);

    return 0;
}