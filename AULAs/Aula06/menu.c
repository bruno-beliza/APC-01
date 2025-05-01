#include <stdio.h>

int main()
{
    int opcao = 0;

    printf("MENU PRINCIPAL\n");
    printf("1 - Consultar Saldo\n");
    printf("2 - Fazer Recarga\n");
    printf("3 - Ver Recados\n");
    printf("4 - Ultimas Ligacoes\n");
    printf("5 - Sair\n");

    printf("Escolha uma das opcoes => ");
    
    scanf("%i", &opcao);

    // if (opcao ==1 )
    // {
    //     printf("O seu saldo eh R$ 1.00\n");
    // }

    // else if(opcao == 2)
    // {
    //     printf("Digite 1 p/ R$ 10.00; 2 p/ R$ 20.00; 5 p/ R$ 50.00\n");
    // }

    // else if(opcao == 3)
    // {
    //     printf("Voce naum tem recado!\n");
    // }

    // else if(opcao == 4)
    // {
    //     printf("Voce ligou para (99) 9 9999-9999\n");
    // }

    // else if (opcao == 5)
    // {
    //     printf("Obrigado pelo contato. Ateh breve!\n");
    //     return 0;
    // }

    // else
    // {
    //     printf("Opcao invalida!\n\nTente novamente..");
    // }

    switch(opcao)
    {
        case 1: printf("O seu saldo eh R$ 1.00\n");
            break;
        case 2: printf("Digite 1 p/ R$ 10.00; 2 p/ R$ 20.00; 5 p/ R$ 50.00\n");
            break;
        case 3: printf("Voce naum tem recado!\n");
            break;
        case 4: printf("Voce ligou para (99) 9 9999-9999\n");
            break;
        case 5: printf("Obrigado pelo contato. Ateh breve!\n");
        return 0;
            break;

        default: printf("Opcao invalida!\n\nTente novamente..");
        
    }

    return 0;
}