#include <stdio.h>

int main()
{
    int numero;
    int fatorial=1;

    printf("Informe um numero inteiro:\n");
    scanf("%i", &numero);

    for(int i=numero; i>0; i--)
    {
        fatorial = fatorial * i;
    }

        printf("Numero: %i\n", numero);
        printf("Fatorial: %i\n", fatorial);
    
    return 0;
}