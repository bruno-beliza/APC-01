#include <stdio.h>

int main()
{
    char tecla;

    printf("\nPressione uma tecla e depois ENTER\n");
    scanf("%c", &tecla);

    printf("Tecla pressionada = '%c'\n", tecla);

    getchar();

    printf("\nPressione outra tecla e depois ENTER\n");
    scanf("%c", &tecla);

    getchar();

    printf("Tecla pressionada = '%c'\n", tecla);

    char nome[30];

    printf("\nInforme seu nome e pressione ENTER\n");
    scanf("%[^\n]s", nome);

    printf("Ola, %s!\n", nome);

    return 0;
}