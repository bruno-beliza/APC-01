#include <stdio.h>

int main()
{
    // 0 < numero < 10 - não se aplica
    // 0 < numero E numero < 10 -- &&
    // numero < 0 OU numero > 10 -- ||
    // NAO numero > 0 -- !

    printf("Tabela da Verdade do AND\n");
    printf("0 E 0 = %i\n", 0 && 0);
    printf("0 E 1 = %i\n", 0 && 1);
    printf("1 E 0 = %i\n", 1 && 0);
    printf("1 E 1 = %i\n", 1 && 1);

    printf("\n");

    printf("Tabela da Verdade do OR\n");
    printf("0 E 0 = %i\n", 0 || 0);
    printf("0 E 1 = %i\n", 0 || 1);
    printf("1 E 0 = %i\n", 1 || 0);
    printf("1 E 1 = %i\n", 1 || 1);

    printf("\n");

    printf("Tabela da Verdade do NOT\n");
    printf("0 E 0 = %i\n", !0);
    printf("0 E 1 = %i\n", !1);
    
    return 0;
}