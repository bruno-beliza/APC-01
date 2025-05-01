#include <stdio.h>
#include <math.h>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;

    printf("Informe o valor de 'a'\n");
    scanf("%i", &a);
    
    printf("Informe o valor de 'b'\n");
    scanf("%i", &b);
    
    printf("Informe o valor de 'c'\n");
    scanf("%i", &c);

    float delta = (b*b) - (4*a*c);

    if(delta<0)
    {
        printf("A funcao nao tem raizes reais.\n");
    }
    
    if(delta>=0)
    {
        float x1 = (-b + (sqrt(delta)))/(2*a);
        float x2 = (-b - (sqrt(delta)))/(2*a);
        printf("Valor da raiz 1 = %.2f\n", x1);
        printf("Valor da raiz 2 = %.2f\n", x2);
    }

    return 0;
}