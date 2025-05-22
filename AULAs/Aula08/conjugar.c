#include <stdio.h>
#include <string.h>

int main()
{
    char verbo[21];
    char pronomes[6][5] = {"Eu", "Tu", "Ele", "Nos", "Vos", "Eles"};
    char sufixos[6][5] = {"o", "as", "a", "amos", "ais", "am"};

    printf("Informe um verbo terminado em '-ar'; ");
    scanf("%s", verbo);

    int tamanho = strlen(verbo);
    int ultima_posicao = tamanho - 1;
    int penultima_posicao = ultima_posicao - 1;

    if (verbo[penultima_posicao] == 'a' && verbo[ultima_posicao] == 'r')
    {
        printf("O verbo '%s' esta no presente do indicativo!\n", verbo);
        char radical [21];
        strcpy(radical, verbo);
        radical[penultima_posicao] = '\0';
        for(int i=0; i<6; i++)
        {
            char conjugacao[100];
            strcpy(conjugacao, pronomes[i]);
            strcat(conjugacao, " ");
            strcat(conjugacao, radical);
            strcat(conjugacao, sufixos[i]);
            printf("%s\n", conjugacao);
        }
    }

    else
    {
        printf("Verbo %s nao termina em 'ar'!", verbo);
    }

    return 0;
}