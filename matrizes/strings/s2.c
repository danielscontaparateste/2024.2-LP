#include <stdio.h>
#include <string.h>

int main(){
    // char str[] = "Daniel Silva";
    // char str[30] = "Daniel Silva";

    // char str[30] = {'D','A','N','I','E','L','\0'};

    char str[30];
    memset(str, '\0', sizeof(str));

    // str[10] = '\0';


    printf("%s\n",str);
    puts("===");
    printf("Qtd. de caracteres: %lu e %lu\n",strlen(str), sizeof(str));

    return 0;

}