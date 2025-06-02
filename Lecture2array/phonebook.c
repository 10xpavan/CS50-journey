#include "cs50.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[] = {"Yulia", "David", "John"};
    string numbers[] = {"+1-612873", "+1-298439028", "+1-90238539"};

    string name = get_string("Name: ");
    for (int i = 0; i < 3; i++)
    {
        if(strcmp(names[i], name) == 0)
        {
            printf("found %s\n", numbers[i]);
            return 0;
        }
    }
    printf("not found\n");
    return 1;
}