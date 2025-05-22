#include <stdio.h>

int main()
{
    float total = 0.0f;

    float nota_fiscal[5][3];

    float valor;

    for(int i=0; i<5;i++)
    {
        printf("Informe um valor para a posicao %i:", i+1);
        scanf("%f", valor);
        nota_fiscal[i][0] = valor;
        
        printf("\nInforme um valor para a posicao %i:", i+1);
        scanf("%f", valor);
        nota_fiscal[i][1] = valor;

        nota_fiscal[i][2] = nota_fiscal[i][0] * nota_fiscal[i][1];

        total = total + nota_fiscal[i][2];
    }

    for(int i=0; i<5; i++)
    {
        for (int j=0; i<3; j++)
        {
            printf("%f", nota_fiscal[i][j]);
        }
    }

    printf("\nTotal = %f", total);

    return 0;
}