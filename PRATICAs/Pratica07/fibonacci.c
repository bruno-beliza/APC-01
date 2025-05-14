#include <stdio.h>

int main()
{
    int n;
    int anterior = 0;
    int proximo = 1;

    printf("Informe um numero inteiro:\n");
    scanf("%i", &n);

    for(int i=0; i<n; i++)
    {
        printf("%i, ", proximo);
        int auxiliar = proximo;
        proximo = anterior + proximo;
        anterior = auxiliar;
    }

    return 0;
}