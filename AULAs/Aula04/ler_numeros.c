#include <stdio.h>

int main()
{
    int numero;

    printf("Informe um numero inteiro:");
    scanf("%i", &numero);

    printf("O numero inserido foi: %i\n", numero);

    getchar();

    float nota;
    printf("\nInforme uma nota entre 0.0 e 10.0:\n");
    scanf("%f", &nota);

    printf("\nSua nota foi: %.1f\n", nota);

    return 0;
}