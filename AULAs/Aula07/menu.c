#include <stdio.h>
#include <stdlib.h>

#define BLK "\e[0;30m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define BLU "\e[0;34m"
#define MAG "\e[0;35m"
#define CYN "\e[0;36m"
#define WHT "\e[0;37m"
#define reset "\e[0m"

int main()
{
    int opcao = 0;

    while(opcao !=4)
    {
        system("clear");

        printf(GRN);
        printf("-------------------------------\n");
        printf("|           MEU JOGO          |\n");
        printf("-------------------------------\n");
        printf("|          1 - Novo Jogo      |\n");
        printf("|          2 - Ver Score      |\n");
        printf("|          3 - Sobre          |\n");
        printf("|          4 - Sair           |\n");
        printf("|                             |\n");
        printf("-------------------------------\n");
        printf(reset);
        printf("\nEscolha uma opcao > ");
        scanf("%i", &opcao);

        while(getchar() != '\n');

        switch(opcao)
        {
            case 1:
            {
                system("clear");
                int nivel = 0;
                printf("Novo Jogo\n");
                printf("\n Selecione a dificuldade\n");
                printf("1 - Facil\n");
                printf("2 - Medio\n");
                printf("3 - Dificil\n");
                printf(" >> ");
                scanf("%i", &nivel);
                break;
            }

            case 2:
            {
                system("clear");
                printf("============= SCORE =============\n");
                printf("\n1 - Jogador A - 10.000 pontos\n");
                printf("\n2 - Jogador B - 70.000 pontos\n");
                printf("\n3 - Jogador C - 90.000 pontos\n");
                printf("\n4 - Jogador D - 150.000 pontos\n");
                printf("\n5 - Jogador E - 2.000 pontos\n");
                printf("\n6 - Jogador F - 1.000.000 pontos\n");
                printf("\n\nPressione ENTER para voltar ao menu");
                
                while(getchar() != '\n');
                
                break;
            }
            
            case 3:
            {
                system("clear");
                printf("========> Sobre este Game <========\n");
                printf("\nDesenvolvido em C!\n");
                printf("\nPor um Programador Root\n");
                printf("\nCopyright(c) 2025\n");
                printf("\n\nPressione ENTER para voltar ao menu");

                while(getchar() != '\n');

                break;
            }

            case 4:
            {
                printf("\nVolte sempre!\n");
                break;
            }

            default:
                printf("\nOpcao invalida! Tente novamente..\n");
        }
    }

    return 0;
}