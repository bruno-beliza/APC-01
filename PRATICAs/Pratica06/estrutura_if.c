#include <stdio.h>

int main()
{
    int numero = 0;

    printf("Informe um numero inteiro: ");
    scanf("%i", &numero);

    int numero_eh_divisivel_por_2 = numero % 2 == 0;

    if (numero_eh_divisivel_por_2)
    {
        printf("O numero informado (%i) eh par!\n", numero);
    }

    else
    {
        printf("O numero informado (%i) eh impar!\n", numero);
    }

    int idade = 0;

    printf("\nInforme sua idade: ");
    scanf("%d", &idade);

    if (idade < 16)
    {
        printf("Voce naum pode votar!\n");
    }

    else if (idade<18 || idade>70)
    {
        printf("Voce pode votar!\n");
    }

    else if (idade>=18 && idade<=70)
    {
        printf("Voce eh obrigado a votar!\n");
    }

    float media;

    printf("Informe sua media: ");
    scanf("%f", &media);

    if (media == 0.0f)
    {
        printf ("A mencao eh 'SR'!\n");
    }

    return 0;
}