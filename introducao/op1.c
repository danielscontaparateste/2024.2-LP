#include <stdio.h>

int main(){
    int a, b;

    puts("Digite o primeiro número: ");
    scanf("%d",&a);

    puts("Digite o segundo número: ");
    scanf("%d",&b);

    printf("Soma: %d\n",(a + b) );
    printf("Subtração: %d\n",(a - b) );
    printf("Multiplicação: %d\n",(a * b) );
    printf("Divisão: %.2f\n",(((float)a) / b) );

    // Realiza a troca
    puts("===");
    printf("Antes da troca: a=%d , b=%d\n",a,b);

    int t;
    t = a;
    a = b;
    b = t;
    
    printf("Depois da troca: a=%d , b=%d\n",a,b);

    puts("===");

    if (a > b)
        printf("O valor %d é maior que %d\n",a,b);
    else{
        printf("O valor %d NÃO é maior que %d\n",a,b);
    }

    return 0;
}