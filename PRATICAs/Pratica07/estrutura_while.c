#include <stdio.h>

int main()
{
    int nota;

    printf("Informe um valor inteiro de nota:\n");
    scanf("%i", &nota);

    while(nota<1 || nota >10)
    {
        printf("Nota invalida. Tente novamente!\n");
        scanf("%i", &nota);
    }

    return 0;
}