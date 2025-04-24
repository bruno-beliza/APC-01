#include <stdio.h>

int main()
{
    int numero = 0;
    
    printf("Informe um numero\n");
    scanf("%i", &numero);

    int numero_eh_divisivel_por_2 = numero % 2 == 0;

    if (numero_eh_divisivel_por_2)
    {
        printf("O numero informado eh par!");
    }

    if (!numero_eh_divisivel_por_2)
    {
        printf("O numero informado nao eh par!");
    }

    else 
    {
        printf("O numero informado eh impar!");
    }

    return 0;
}
