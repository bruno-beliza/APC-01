#include <stdio.h>

int main()
{
    char operacao;
    float numero1;
    float numero2;

    printf("Informe 02 numeros\n");
    scanf("%f", &numero1);
    scanf("%f", &numero2);
    
    getchar();

    printf("== Escolha uma operacao: ==\n");
    printf("    Soma (+)\n");
    printf("    Subtracao (-)\n");
    printf("    Multiplicacao (*)\n");
    printf("    Divisao (/)\n");

    operacao = getchar();

    float resultado;

    switch(operacao)
    {
        case '+':
            resultado = numero1 + numero2;
        break;
        
        case '-':
            resultado = numero1 - numero2;
        break;
        
        case '*':
            resultado = numero1 * numero2;
        break;
        
        case '/':
            resultado = numero1 / numero2;
        break;

        default:
            printf("Operacao invalida. Tente novamente..\n");
        break;
    }

    printf("\nResultado da Operacao = %.2f", resultado);

    return 0;
}