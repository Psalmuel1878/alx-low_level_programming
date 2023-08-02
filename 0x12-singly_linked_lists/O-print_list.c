#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: The head of the linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
    size_t count = 0;

    while (h)
    {
        if (h->str)
            printf("[%d] %s\n", h->len, h->str);
        else
            printf("[0] (nil)\n");

        count++;
        h = h->next;
    }

    return (count);
}
