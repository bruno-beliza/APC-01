#include <stdio.h>
#include <string.h>

int main()
{
    char frase[31];

    printf("\nInforme uma frase: ");
    scanf("%s", frase);

    char letra;

    while (getchar() != '\n');

    printf("\nInforme uma letra: ");
    scanf("%c", &letra);

    int quantidade = 0;

    for (int i = 0; i < strlen(frase); i++)
    {
        if (frase[i] == letra)
        {
            quantidade++;
        }
    }

    if (quantidade > 0)
    {
        printf("\nFrase: %s", frase);
    }

    else
    {
        printf("\nA frase nao contem a letra digitada...");
    }

    return 0;
}