#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
} node;

// argc ? 
// agrv ?

int main(int argc, char *argv[])
{
    node *list = NULL; // declare the null to pointer
    
    for (int i = 1; i < argc; i++)
    {
        int number = atoi(argv[i]);
        // printf("%s\n", argv[i])
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            // free memory thus far
            return 1;
        }
        n->number = number;
        n->next = list;
        list = n;
    }

    // print the while list
    node *ptr = list;
    while (ptr != NULL)
    {
        printf("%i\n", ptr->number);
        ptr = ptr->next;
    }

}
