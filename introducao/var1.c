#include <stdio.h>

int main(){
    // char x;

    // x = 67; // decimal
    // x = 0x47;
    // x = 'A'; // char
    // x = 0x0a;
    // x = 0x12; // hexadecimal
    // x = 022; // octal

    // printf("x : %#x\n",x);
    // printf("x : %d\n",x);
    // printf("x : %c\n",x);
    
    unsigned char x = 0xff;
    
    printf("x : %hhu\n", x+1); // extrapolar

    return 0;
}