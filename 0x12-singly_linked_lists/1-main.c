#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

list_t *create_node(const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node)
	{
		new_node->str = *str;
		new_node->next = NULL;
	}

	return (new_node);
}

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}

int main(void)
{
	list_t *head = NULL;
	list_t *node1 = create_node("Hello");
	list_t *node2 = create_node("World");
	list_t *node3 = create_node("!");

	head = node1;
	node1->next = node2;
	node2->next = node3;

	size_t len = list_len(head);
	printf("Number of elements in the linked list: %zu\n", len);

	free_list(head);

	return (0);
}

