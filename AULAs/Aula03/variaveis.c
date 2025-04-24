#include <stdio.h>

int main()
{
    char tecla;
    tecla = 'B';
    printf("Tecla = %c\n", tecla);

    tecla = 128;
    printf("Tecla = %c\n", tecla);

    int numero = 10;
    printf("Numero digitado: %i\n", numero);

    {
        int numero = 50;
        printf("Numero digitado: %i\n", numero);
    }

    float media = 9.5f;
    printf("Media: %.1f\n", media);

    float dizima = 1.6666666666666666666666;
    printf("Dizima: %.8f\n", dizima);

    return 0;
}