#include <stdio.h>

int main()
{
    for (int i=0; i<10; i++)
    {
        printf("%i\n", i);
    }

    for(int i=9; i>=0; i--)
    {
        printf("\n%i", i);
    }

    for(;;)
    {
        printf("Ao infinito e alem!\n");
    }

    return 0;
}