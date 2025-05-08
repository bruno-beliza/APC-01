#include <stdio.h>

int main()
{
    int numero = 0;
    // printf("Informe um numero de 1 a 10\n");
    // scanf("%i", &numero);

    while (numero<1 || numero>10)
    {
        printf("Informe um valor entre 1 a 10:\n");
        scanf("%i", &numero);
            while(getchar() != '\n'); //limpa o buffer do teclado
    }

    do
    {
        printf("Informe um valor entre 1 a 10:\n");
        scanf("%i", &numero);
    }

    while();


    printf("\nTabuada Crescente:\n");

    for(int i=1; i<=10; i++)
    {
        printf("%i x %i = %i\n", i, numero, i*numero);
    }

    printf("\nTabuada Decrescente:\n");

    for(int i=10; i>=1; i--)
    {
        printf("%i x %i = %i\n", i, numero, i*numero);
    }


    // for(int i=0; i<10; i--)
    // {
    //     printf("Ao infinito e alem!\n");
    // }


    // printf("1 x %i = %i\n", numero, 1*numero);

    // printf("2 x %i = %i\n", numero, 2*numero);

    // printf("3 x %i = %i\n", numero, 3*numero);

    // printf("4 x %i = %i\n", numero, 4*numero);

    // printf("5 x %i = %i\n", numero, 5*numero);

    // printf("6 x %i = %i\n", numero, 6*numero);

    // printf("7 x %i = %i\n", numero, 7*numero);

    // printf("8 x %i = %i\n", numero, 8*numero);

    // printf("9 x %i = %i\n", numero, 9*numero);
    
    // printf("10 x %i = %i\n", numero, 10*numero);
    

    return 0;
}