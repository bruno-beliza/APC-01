#include <stdio.h>

int main()
{
    enum dias_da_semana_e
    {
        dom = 1,
        seg,
        ter,
        qua,
        qui,
        sex,
        sab
    };

    printf("Informe um dia da semana (1 - 7): ");
    int dia_da_semana = 0;
    
    scanf("%i", &dia_da_semana);

    switch(dia_da_semana)
    {
        case seg:

        case ter:
        
        case qua:
        
        case qui:
        
        case sex:
        printf("\nEh um dia util!\n");
        break;

        case sab:
        
        case dom:
        printf("\nNao eh um dia util!\n");
        break;

        default:
        printf("\nDia invalido!\n");
    }

    return 0;
}