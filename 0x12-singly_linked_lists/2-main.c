#include <stdio.h>
#include <stdlib.h>  // Include stdlib.h for EXIT_SUCCESS and EXIT_FAILURE macros
#include "lists.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    list_t *head = NULL;
    list_t *new_node;

    new_node = add_node(&head, "World");
    if (new_node == NULL)
    {
        printf("Failed to add node.\n");
        return (EXIT_FAILURE);
    }

    new_node = add_node(&head, "Hello");
    if (new_node == NULL)
    {
        printf("Failed to add node.\n");
        return (EXIT_FAILURE);
    }

    // Print the list to verify the order of nodes
    list_t *current = head;
    while (current != NULL)
    {
        printf("%s\n", current->str);
        current = current->next;
    }

    return (EXIT_SUCCESS);
}

