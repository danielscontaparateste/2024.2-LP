#include <stdio.h>

int main(){
    int x = 10;

    // x++; // x = x + 1;
    // x--; // --x; x = x - 1;

    // printf("x = %d\n", x++);
    printf("x = %d\n", ++x);
    
    printf("x = %d\n", x);

    puts("====");

    int y = 7;

    // y += 5; // y = y + 5;
    // y -= 5; // y = y - 5;
    // y *= 5; // y = y * 5;
    // y %= 5; // y = y % 2;
    y /= 5; // y = y / 5;

    printf("y = %d\n", y);

    puts("====");

    int z = 12;

    // if (z % 2 == 0){
    //     puts("PAR");
    // }else{
    //     puts("IMPAR");
    // }

    // if (!(z % 2)){
    //     puts("PAR");
    // }else{
    //     puts("IMPAR");
    // }

    // (expr)?instr1:instr2;
    // (!(z % 2))?puts("PAR"):puts("IMPAR");

    // if (!(z % 2)){
    //     z *= 2; // z = z * 2;
    // }else{
    //     z /= 3; // z = z / 3;
    // }

    // z = (expr)?instr1:instr2;
    // z = (!(z % 2))?z*2:z/3;
    // printf("z= %d\n", z);
    
    printf("z = %d\n", (!(z % 2))?z*2:z/3);

    // z *= (!(z % 2))?2:3;

    return 0;

}