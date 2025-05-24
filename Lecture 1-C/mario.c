#include <stdio.h>
#include "cs50.h"

int main(void)
{
    for (int row=0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            printf("#");
        }
        printf("\n");
    }
}