#include <stdio.h>

int main(){
    unsigned x = 11; // 1011 // unsigned int x = 10;
    unsigned y = 7;  // 0111

    x = x ^ y; // x = 1100
    y = x ^ y; // y = 1011
    x = x ^ y; // x = 0111

    printf("x = %u\ny = %u\n",x,y);

    return 0;
}