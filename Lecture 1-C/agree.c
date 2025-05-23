#include <stdio.h>
#include "cs50.h"

int main(void)
{
    char c = get_char("do you agree?");

    if (c == 'y' || c == 'Y')
    {
        printf("agreed.\n");

    }
    else
    {
        printf("disagreed.\n");
    }
}