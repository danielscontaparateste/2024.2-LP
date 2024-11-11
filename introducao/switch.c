#include <stdio.h>

int main(){

    int x, y, res;
    puts("Entre com o primeiro valor: ");
    // scanf("%d",&x);
    scanf("%d%*c",&x); //Ver: https://faq.cprogramming.com/cgi-bin/smartfaq.cgi?answer=1352443831&id=1043284392
    puts("Entre com o segundo valor: ");
    scanf("%d%*c",&y);
    // scanf("%d",&y);

    // getchar();

    puts("Digite: ");
    puts("1. Somar");
    puts("2. Subtrair");

    char op = getchar();
    // char op;
    // scanf(" %c",&op);

    printf("op : %d\n",op);

    switch(op){
        case '1':
            res = x + y;
        break;
        case '2':
            res = x - y;
        break;
        default:
            puts("Opção Inválida");        
    }

    printf("Resposta: %d\n", res);

    return 0;

}