#include <stdio.h>

int main()
{
    int nota = 0;

    printf("Informe sua nota\n");
    scanf("%i", &nota);

    switch(nota)
    {
        case 1:
            printf("Voce recebeu '*'.\n");
            break;
        case 2:
            printf("Voce recebeu '**'.\n");
            break;
        case 3:
            printf("Voce recebeu '***'.\n");
            break;
        case 4:
            printf("Voce recebeu '****'.\n");
            break;
        case 5:
            printf("Voce recebeu '*****'.\n");
            break;

        default:
            printf("Nota invalida! Tente novamente..\n");
            break;
    }

    return 0;
}