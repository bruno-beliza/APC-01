#include <stdio.h>

int main()
{
    // ++ incrementa 1
    // --decrementa 1

    int numero = 10;
    printf("Pre-Incrementa numero = %i\n", ++numero);
    printf("Pre-Decrementa numero = %i\n", --numero);
    printf("Pos-Incrementa numero = %i\n", numero++);
    printf("Pos-Decrementa numero = %i\n", numero--);
    printf("Numero final = %i\n", numero);

    return 0;
}