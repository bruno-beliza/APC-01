#include <stdio.h>

int main()
{
    int numero;
    int maior;
    int menor;

    printf("Informe um numero inteiro:\n");
    scanf("%i", &numero);
    
    maior = numero;
    menor = numero;  

    while(numero != 0)
    {
        if(numero > maior)
        {
            maior = numero;
        } 

        if(numero < menor)
        {
            menor = numero;
        }

            printf("Informe um numero inteiro:\n");
            scanf("%i", &numero);
    }

    printf("\nMaior numero: %i", &maior);
    printf("\nMenor numero: %i", &menor);

    return 0;
}