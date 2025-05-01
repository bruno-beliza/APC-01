#include <stdio.h>

int main()
{
    int dia = 0;

    printf("Informe um numero para saber a qual dia da semana ele corresponde\n");
    scanf("%i", &dia);

    switch(dia)
    {
        case (1):
            printf("Domingo");
        break;
    
        case (2):
            printf("Segunda");
        break;
    
        case (3):
            printf("Terca");
        break;
    
        case (4):
            printf("Quarta");
        break;
    
        case (5):
            printf("Quinta");
        break;
    
        case (6):
            printf("Sexta");
        break;
    
        case (7):
            printf("Sabado");
        break;

        default:
            printf("Nao ha dia associado ao numero informado..");
        break;
    }

    return 0;
}