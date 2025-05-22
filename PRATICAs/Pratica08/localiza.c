#include <stdio.h>

int main()
{
    int numeros [10];

    for(int i=0; i<10; i++)
    {
        printf("Informe o numero da posicao %i: ", i+1);

        scanf("%i", &numeros[i]);
    }

    int numero;

    printf("\nInforme um numero para pesquisar sua posicao:");
    scanf("%i", &numero);

    int achou = -1;
    
    for(int i=0; i<10; i++)
    {
        if(numeros[i] == numero)
        {
            achou = i;
        }
    }

    if(achou<0)
    {
        printf("\nO numero nao foi encontrado..\n");
    }

    else
    {
        printf("\nO numero foi encontrado na posicao %i!", achou+1);
    }

    return 0;
}