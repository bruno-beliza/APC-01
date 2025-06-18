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

//Estrutura de Jogador
struct Jogador
{
    char nome[50];
    char simbolo;
};

int main()
{
    //Declaração de Variáveis
    struct Jogador jogador1, jogador2;
    char tabuleiro[3][3];
    int i, j, linha, coluna, jogadas = 0;
    int opcao, vez = 0;
    char vencedor = ' ';

    //Menu Principal
    while (1)
    {
        system("cls");
        printf(CYN);
        printf(" _____                                 __               \n");
        printf("/\\___ \\                               /\\ \\              \n");
        printf("\\/__/\\ \\    ___      __     ___       \\_\\ \\     __     \n");
        printf("   _\\ \\ \\  / __`\\  /'_ `\\  / __`\\     /'_` \\  /'__`\\   \n");
        printf("  /\\ \\_\\ \\/\\ \\L\\ \\/\\ \\L\\ \\/\\ \\L\\ \\   /\\ \\L\\ \\/\\L\\._\\ \n");
        printf("  \\ \\____/\\ \\____/\\ \\____ \\ \\____/   \\ \\___,_\\ \\__/\\.\\_\\\n");
        printf("   \\/___/  \\/___/  \\/___L\\ \\/___/     \\/__,_ /\\/__/\\/_/ \n");
        printf("                     /\\____/                            \n");
        printf("                     \\_/__/                             \n");
        printf(MAG);
        printf("      __  __          ___    __                              \n");
        printf("     /\\ \\/\\ \\        /\\_ \\  /\\ \\                             \n");
        printf("     \\ \\ \\ \\ \\     __\\//\\ \\ \\ \\___      __                 \n");
        printf("      \\ \\ \\ \\ \\  /'__`\\\\ \\ \\ \\  _ `\\  /'__`\\               \n");
        printf("       \\ \\ \\_/ \\/\\  __/ \\_\\ \\_\\ \\ \\ \\ /\\L\\._\\            \n");
        printf("        \\ `\\___/\\ \\____\\/\\____\\\\ \\_\\ \\_\\ \\__/\\.\\_\\         \n");
        printf("         `\\/__/  \\/____/\\/____/ \\/_/\\/_/\\/__/\\/_/            \n");
        printf("\n\n");
        printf(reset);

        printf(YEL);
        printf("Selecione uma opcao:\n\n");
        printf(CYN);
        printf("1. Novo Jogo\n");
        printf(BLK);
        printf("2. Sair\n");
        printf(reset);

        scanf("%d", &opcao);

        if (opcao == 2)
        {
            printf(GRN);
            printf(" _    __      ____           _____                               \n");
            printf("| |  / /___  / / /____      / ___/___  ____ ___  ____  ________ \n");
            printf(YEL);
            printf("| | / / __ \\/ / __/ _ \\     \\__ \\/ _ \\/ __ `__ \\/ __ \\/ ___/ _ \\\n");
            printf(BLU);
            printf("| |/ / /_/ / / /_/  __/    ___/ /  __/ / / / / / /_/ / /  /  __/\n");
            printf(WHT);
            printf("|___/\\____/_/\\__/\\___/    /____/\\___/_/ /_/ /_/ .___/_/   \\___/ \n");
            printf("                                             /_/                 \n");
            printf(reset);
            break;
        }
        else if (opcao == 1)
        {
            //Recebimento de dados dos Jogadores
            fflush(stdin);
            printf("Informe o nome do Jogador 1 - X: ");
            fgets(jogador1.nome, 50, stdin);
            jogador1.simbolo = 'X';

            printf("Informe o nome do Jogador 2 - O: ");
            fgets(jogador2.nome, 50, stdin);
            jogador2.simbolo = 'O';

            // Inicialização do tabuleiro
            for (i = 0; i < 3; i++)
                for (j = 0; j < 3; j++)
                    tabuleiro[i][j] = ' ';

            jogadas = 0;
            vencedor = ' ';
            vez = 0;
            
            // Preenchimento do Tabuleiro
            while (jogadas < 9 && vencedor == ' ')
            {
                system("cls");
                printf(MAG);
                printf("Tabuleiro atual:\n\n");
                printf(reset);
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        printf(YEL);
                        printf(" %c ", tabuleiro[i][j]);
                        if (j < 2)

                            printf("|");
                    }
                    printf("\n");

                    printf(YEL);
                    if (i < 2)
                        printf("---+---+---\n");
                    printf(reset);
                }

                struct Jogador jogadorAtual = (vez % 2 == 0) ? jogador1 : jogador2;
                printf(CYN);
                printf("\nJogador da vez: %s", jogadorAtual.nome);
                printf(reset);
                printf("\nEscolha uma linha  (0, 1 ou 2): ");
                scanf("%d", &linha);
                printf("\nAgora escolha a coluna (0, 1 ou 2): ");
                scanf("%d", &coluna);

                if (linha < 0 || linha > 2 || coluna < 0 || coluna > 2 || tabuleiro[linha][coluna] != ' ')
                {
                    printf(RED);
                    printf("\nJogada invalida! Tente novamente.\n");
                    system("pause");
                    printf(reset);
                    continue;
                }

                tabuleiro[linha][coluna] = jogadorAtual.simbolo;
                jogadas++;
                vez++;

                // Verificação do Jogador vencedor
                for (i = 0; i < 3; i++)
                {
                    if (tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][1] == tabuleiro[i][2] && tabuleiro[i][0] != ' ')
                        vencedor = tabuleiro[i][0];
                    if (tabuleiro[0][i] == tabuleiro[1][i] && tabuleiro[1][i] == tabuleiro[2][i] && tabuleiro[0][i] != ' ')
                        vencedor = tabuleiro[0][i];
                }
                if (tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2] && tabuleiro[0][0] != ' ')
                    vencedor = tabuleiro[0][0];
                if (tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0] && tabuleiro[0][2] != ' ')
                    vencedor = tabuleiro[0][2];
            }

            // Apresentação do resultado
            system("cls");

            printf(GRN);
            printf("\n\nTabuleiro final:\n\n");
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    printf(" %c ", tabuleiro[i][j]);

                    printf(YEL);
                    if (j < 2)
                        printf("|");
                }
                printf("\n");

                printf(YEL);
                if (i < 2)
                    printf("---+---+---\n");
                printf(reset);
            }

            // Mensagem de encerramento da partida
            printf(GRN);
            printf("\n\n");
            printf(".----------------.  .----------------.  .----------------.    .----------------.  .----------------. \n");
            printf("| .--------------. || .--------------. || .--------------. |  | .--------------. || .--------------. |\n");
            printf("| |  _________   | || |     _____    | || | ____    ____ | |  | |  ________    | || |  _________   | |\n");
            printf("| | |_   ___  |  | || |    |_   _|   | || ||_   \\  /   _|| |  | | |_   ___ `.  | || | |_   ___  |  | |\n");
            printf("| |   | |_  \\_|  | || |      | |     | || |  |   \\/   |  | |  | |   | |   `. \\ | || |   | |_  \\_|  | |\n");
            printf("| |   |  _|      | || |      | |     | || |  | |\\  /| |  | |  | |   | |    | | | || |   |  _|  _   | |\n");
            printf("| |  _| |_       | || |     _| |_    | || | _| |_\\/|_ |_ | |  | |  _| |___.' / | || |  _| |___/ |  | |\n");
            printf("| | |_____|      | || |    |_____|   | || ||_____||_____|| |  | | |________.'  | || | |_________|  | |\n");
            printf("| |              | || |              | || |              | |  | |              | || |              | |\n");
            printf("| '--------------' || '--------------' || '--------------' |  | '--------------' || '--------------' |\n");
            printf(" '----------------'  '----------------'  '----------------'    '----------------'  '----------------' \n");
            printf(".----------------.  .----------------.  .----------------.  .----------------.    .----------------. \n");
            printf("| .--------------. || .--------------. || .--------------. || .--------------. |  | .--------------. |\n");
            printf("| |     _____    | || |     ____     | || |    ______    | || |     ____     | |  | |              | |\n");
            printf("| |    |_   _|   | || |   .'    `.   | || |  .' ___  |   | || |  .'    `.   | |  | |      _       | |\n");
            printf("| |      | |     | || |  /  .--.  \\  | || | / .'   \\_|   | || |  /  .--.  \\  | |  | |     | |      | |\n");
            printf("| |   _  | |     | || |  | |    | |  | || | | |    ____  | || |  | |    | |  | |  | |     | |      | |\n");
            printf("| |  | |_' |     | || |  \\  `--'  /  | || | \\ `.___]  _| | || |  \\  `--'  /  | |  | |     | |      | |\n");
            printf("| |  `.___.'     | || |   `.____.'   | || |  `._____.'   | || |   `.____.'   | |  | |     |_|      | |\n");
            printf("| |              | || |              | || |              | || |              | |  | |     (_)      | |\n");
            printf("| '--------------' || '--------------' || '--------------' || '--------------' |  | '--------------' |\n");
            printf(" '----------------'  '----------------'  '----------------'  '----------------'    '----------------'  \n");
            printf(reset);

            if (vencedor == 'X')
            {
                printf(BLU);
                printf("\nJogador vencedor: %s\n", jogador1.nome);
            }
            else if (vencedor == 'O')
            {
                printf("\nJogador vencedor: %s\n", jogador2.nome);
            }
            else
            {
                printf(BLK);
                printf("\nEmpate!\n");
            }

            system("pause");
        }
        else
        {
            printf(RED);
            printf("Opcao invalida.\n");
            system("pause");
        }
    }

    return 0;
}
