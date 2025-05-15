#include <stdio.h>

int main()
{
    float boletim[8][3];//matriz bidimensional = tabela = array

    for(int i=0; i<8; i++)
    {
        printf("\nDisciplina %i: \n", i+1);

            for(int j=0; j<2; j++)
            {
                printf("Nota A%i: ", j+1);
                scanf("%f", &boletim[i][j]);
            }

            boletim[i][2] = 0.4f*boletim[i][0] + 0.6f*boletim[i][1];
    }

    printf("Boletim de Notas: \n");

        for(int i=0; i<8; i++)
        {
            printf("Disciplina %i: ", i+1);

                for(int j=0; j<3;j++)
                {
                    printf("%4.1f", boletim[i][j]);
                }
            printf("\n");
        }

    return 0;
}