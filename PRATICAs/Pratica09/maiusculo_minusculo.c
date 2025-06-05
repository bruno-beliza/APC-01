#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char string [11];
    char maiusculo[11];
    char minusculo[11];

    printf("Informe uma palavra simples: ");
    scanf("%s", string);

    memset(maiusculo, '\0', sizeof(maiusculo));
    memset(minusculo, '\0', sizeof(minusculo));

    for(int i=0; i<strlen(string); i++)
    {
        maiusculo[i] = toupper(string[i]);
        minusculo[i] = tolower(string[i]);
    }

    printf("\n Maiusculo: ", maiusculo);
    printf("\n Minusculo: ", minusculo);
    
    return 0;
}
