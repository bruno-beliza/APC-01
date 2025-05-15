#include <stdio.h>

int main()
{
    int numeros[10]; //matriz unidimensional = vetor = array
    numeros[0] = 1;
    numeros[1] = 2;
    numeros[2] = 3;
    numeros[3] = 4;
    numeros[4] = 5;
    numeros[5] = 6;
    numeros[6] = 7;
    numeros[7] = 8;
    numeros[8] = 0;
    numeros[9] = 10;

    int maior_numero = -99999;
    int menor_numero = 99999;

    for (int i=0; i<10; i++)
    {
        printf("Informe o numero da posicao %i: ", i+1);
        scanf("%i", &numeros[i]);

        if(numeros[i] > maior_numero)
        {
            maior_numero = numeros[i];
        }

        if(numeros[i] < menor_numero)
        {
            menor_numero = numeros[i];
        }
    }

    printf("\nOs numeros informados foram:\n");
    for(int i = 0; i<10; i++)
    {
        printf("%i. %i\n", i+1, numeros[i]);
    }

    printf("\nO maior numero foi: %i\n", maior_numero);
    printf("\nO menor numero foi: %i\n", menor_numero);
    
    return 0;
}