/*
 *  This C implementation will clear the input buffer.
 *  The chances are that the buffer will already be empty,
 *  so the program will wait until you press [Enter].
 */

#include <stdio.h>

int main(void)
{
    int ch;
    char x;
    char  buf[BUFSIZ];
  
//   puts("Flushing input");
     puts("Entre com x: ");
    scanf("%c",&x);
    // scanf("%c%*c", &x);
    
  
    while ((ch = getchar()) != '\n' && ch != EOF);
  
    printf ("Enter some text: ");
  
    if (fgets(buf, sizeof(buf), stdin))
    {
        printf ("You entered: %s", buf);
    }

    printf("x: %c\n",x);
    
    return 0;
}