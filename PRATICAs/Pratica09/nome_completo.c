#include <stdio.h>
#include <string.h>

int main()
{
    char primeiro_nome [12];
    char ultimo_nome [12];

    printf("\nInforme seu primeiro nome: ");
    scanf("%s", primeiro_nome);

    while (getchar() != '\n');
    
    printf("Informe seu ultimo nome: ");
    scanf("%s", ultimo_nome);

    while (getchar() != '\n');

    char nome [32];

    strcpy(nome, primeiro_nome);
    strcat(nome, " ");
    strcat(nome, ultimo_nome);

    printf("\nNome completo: %s", nome);
    
    return 0;
}