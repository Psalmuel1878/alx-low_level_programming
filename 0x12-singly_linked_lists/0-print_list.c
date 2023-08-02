#include <stdio.h>
#include "list.h"

/**
 * print_list - Function to print the list and return the number of nodes
 * @h: pointer to the head of the list
 * Return: the number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	/* If the list is empty, print [0] (nil) and return 0 */
	if (h == NULL)
	{
		printf("[0] (nil)\n");
		return (count);
	}

	/* Traverse the list and print each element */
	while (h != NULL)
	{
		/* If the str is NULL, print "(nil)" instead */
		printf("[%s]\n", h->str ? h->str : "(nil)");
		h = h->next;
		count++;
	}

	return (count);
}

int main(void)
{
	/* Example usage */
	list_t node1 = {"Hello", NULL};
	list_t node2 = {"World", NULL};
	list_t node3 = {"!", NULL};

	node1.next = &node2;
	node2.next = &node3;

	size_t count = print_list(&node1);
	printf("Number of nodes: %zu\n", count);

	return (0);
}

