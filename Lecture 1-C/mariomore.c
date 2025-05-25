#include <stdio.h>
#include "cs50.h"

int main(void)
{
    int i = 1;
    int j = 1;
    for (j = 1; j < 10; j++)
    {
        for (i=j-1; i < 10; i++)
        {
            printf(" ");
        }
        for (i = 1; i < j; i++)
        {
            printf("#");
        }
        printf("  ");
        for (i = 1; i < j; i++)
        {
            printf("#");
        }
        printf("\n");

    }
}