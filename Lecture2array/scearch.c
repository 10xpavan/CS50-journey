#include "cs50.h"
#include <stdio.h>

int main(void)
{
    int number[] = {20, 500, 10, 5, 100, 1, 50};

    int n = get_int("Number: ");
    for (int i = 0; i < 7; i++)
    {
        if (number[i] == n)
        {
            printf("Found\n");
        }
    }
}