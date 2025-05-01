#include <stdio.h>

int main()
{
    float temperatura;

    printf("Informe uma temperatua em C\n");
    scanf("%f", &temperatura);

    if(temperatura>40.0f)
    {
        printf("Estah Muito Quente!!");
    }

    if((temperatura>30.0f) && (temperatura<=40.0f))
    {
        printf("Estah Quente!");
    }

    if((temperatura>20.0f) && (temperatura<=30.0f))
    {
        printf("Estah Agradavel");
    }

    if(temperatura<=20.0f)
    {
        printf("Estah Frio..");
    }

    return 0;
}