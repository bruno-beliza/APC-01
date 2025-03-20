#include <stdio.h>

int main()
{
    printf("=============================\n");
    printf("\t%s \t%s\t\n", "NOTA", "LEGAL");
    printf("=============================\n");
    printf("%s %10s %15s\n", "Produto", "QTD", "Valor Unit");
    printf("%s %8.02i %12.2f\n", "Camiseta", 2, 39.99);
    printf("%s %11.02i %12.2f\n", "Calca", 1, 89.90);
    printf("%s %5.02i %12.2f\n", "Meia Social", 3, 19.99);
    printf("=============================\n");
    printf("%s\t %20.2f\n", "Total:", 229.85);
    return 0;
}