#include <stdio.h>
#include <stdlib.h>

// #define TAM 80

int main(int argc, char **argv){
    FILE *fp;
    char ch;

    if (argc!=2){
        printf("Use: \n\n\t\t %s <nomeDoArquivo>\n\n",argv[0]);
        exit(1);
    }

    fp = fopen(argv[1],"a+");

    if (fp==NULL){
        puts("Erro ao abrir o arquivo");
        exit(1);
    }

    // Escrita dos dados
    do{
        puts("Digite um char ");
        ch = getchar();
        fflush(stdin);
        putc(ch, fp);
        putc('\n', fp);
    }while(ch != '$');

    rewind(fp);

    // fclose(fp);

    //####################

    // fp = fopen(argv[1],"r");

    puts("=====");
    puts("Dados do arquivo: ");
    //Leitura dos dados 
    int chr;
    while ((chr = getc(fp)) != EOF){
        putc(chr, stdout);
    }

    fclose(fp);
    
    return 0;

}
