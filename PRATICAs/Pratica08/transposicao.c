#include <stdio.h>
#include <string.h>

int main()
{
    char frase[31];

    printf("Informe uma frase de ate 30 caracteres:\n");
    scanf("%[^\n]s", frase);

    while (getchar() != '\n');
    
    char matriz[6][5];

    int k = 0;

    for(int i=0; i<6; i++)
    {
        for(int j=0; j<5; j++)
        {
            matriz[i][j] = frase[k];
            k++;
        }
    }

    printf("\n A transposicao da frase eh: \n");

    for(int j=0; j<5; j++)
    {
        for(int i=0; i<6; i++)
        {
            printf("%c", matriz[i][j]);
        }
    }

    return 0;
}