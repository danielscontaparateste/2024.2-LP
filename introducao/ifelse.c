#include <stdio.h>

int main(){
    unsigned char idade;

    puts("Entre com a idade: ");
    scanf("%hhu",&idade);

    if (idade < 16){ 
        puts("Não votar, não dirigir. ");
    }else if (idade < 18) {
        puts("Votar, Não dirigir");
    }else {
        puts ("Votar, Dirigir");
    }

    //

    // if (idade < 16){
    //     if (!(idade % 2)) {
    //         puts("Idade menor que 16 e Par. ");
    //     }
    // }

    if ((idade < 16) && (!(idade % 2))) puts("Idade menor que 16 e Par. ");

    return 0;    
}