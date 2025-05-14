#include <stdio.h>

int main()
{
    int numero;

    printf("Informe um numero inteiro:\n");
    scanf("%i", &numero);

    for(int i=1; i<101; i++)
    {
        if(i%numero == 0)
        {
            printf("\n%i\n", i);
        }        
    }

    return 0;
}