#include <stdio.h>

int main()
{
    int nota;
    do
    {
        printf("Informe um valor inteiro de nota:\n");
        scanf("%i", &nota);

        if(nota<1 || nota>10)
        {
            printf("\nNota invalida. Tente novamente!\n");
        }
    }

    while(nota<1 || nota>10);

    return 0;
}