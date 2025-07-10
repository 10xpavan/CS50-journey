#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
} node;

int main(void)
{
    node *list = NULL;
    for (int i = 0; i < 3; i++)
    {
        node *n = malloc(sizeof(node));
        if( n==NULL)
        {
            return 1;
        }
        (*n).number = get_int("Number: ");
        (*n).next = NULL;
    }
}