#include <stdio.h>

int main(){
    unsigned char cod = 10;
    unsigned char pos;
    unsigned char mask = 0x01; // 0000 0001

    // Ligar 
    puts("Digite a posição que deseja ligar: ");
    scanf("%hhu",&pos);

    //Processamento
    mask <<= (pos-1);
    cod = cod | mask; 

    printf("Código atualizado: %hhu\n",cod);
    
    return 0;
}