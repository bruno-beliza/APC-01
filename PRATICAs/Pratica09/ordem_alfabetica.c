#include <stdio.h>
#include <string.h>

int main()
{
    char palavra1[12];
    char palavra2[12];

    printf("\n");

    printf("Digite uma palavra simples: ");
    scanf("%s", palavra1);

    printf("Digite outra palavra simples: ");
    scanf("%s", palavra2);

    printf("\n");

    if (strcmp(palavra1, palavra2) >= 0)
    {
        printf("Segunda palavra digitada: %s\n", palavra2);

        printf("Primeira palavra digitada: %s\n", palavra1);
    }

    else
    {
        printf("Primeira palavra digitada: %s\n", palavra1);

        printf("Segunda palavra digitada: %s\n", palavra2);
    }

    return 0;
}