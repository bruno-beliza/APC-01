#include <stdio.h>

int main()
{
    // + Soma
    // - Subtracao
    // * Multiplicacao
    // / Divisao
    // % Resto da Divisao

    int numero1 = 10;
    int numero2 = 20;

    int x = 0;
    x = x+1;
    
    int soma = numero1 + numero2;
    printf("O resultado da soma entre %i e %i = %i\n", numero1, numero2, soma);

    int subtracao = numero1 - numero2;
    printf("O resultado da subtracao entre %i e %i = %i\n", numero1, numero2, subtracao);

    int multiplicacao = numero1 * numero2;
    printf("O resultado da multiplicacao entre %i e %i = %i\n", numero1, numero2, multiplicacao);

    float divisao = numero1*1.0f / numero2*1.0f;
    printf("O resultado da divisao entre %i e %i = %.1f\n", numero1, numero2, divisao);

    float resto = numero1 % numero2;
    printf("O resultado do resto da divisao entre %i e %i = %.1f\n", numero1, numero2, resto);

    int operacao = 1 / 2 + 5 * 4 % 1 -2;
    printf("A operacao 1 / 2 + 5 * 4 %% 1 -2 = %i\n", operacao);
    
    operacao = (1 / 2) + 5 * 4 % (1 -2);
    printf("A operacao (1 / 2) + 5 * 4 %% (1 -2) = %i\n", operacao);


    return 0;
}