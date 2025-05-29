#include <stdio.h>

int main()
{
    float notas[10];

    float soma = 0.0f;

    float media = 0.0f;

    int qtde_acima_media = 0;

    for(int i=0; i<10; i++)
    {
        printf("Informe a nota da posicao %i: ", i+1);
        scanf("%f", &notas[i]);

        soma = soma + notas[i];
    }

    media = (soma) / 10;

    for (int i=0; i<10; i++)
    {
        if(notas[i]>media)
        {
            qtde_acima_media++;
        }
    }

    printf("\nSoma = %.2f", soma);
    
    printf("\nMedia = %.2f", media);
    
    printf("\nQuantidade de notas acima da Media = %i", qtde_acima_media);
    

    return 0;
}