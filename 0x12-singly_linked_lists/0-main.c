#include <stdio.h>
#include "lists.h"

/**
 * create_node - Creates a new node with the given data.
 * @str: The string to be stored in the node.
 *
 * Return: A pointer to the new node, or NULL on failure.
 */
list_t *create_node(char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = str;
	if (str != NULL)
	{
		unsigned int len = 0;
		while (str[len])
			len++;
		new_node->len = len;
	}
	else
	{
		new_node->len = 0;
	}

	new_node->next = NULL;
	return (new_node);
}

/**
 * free_list - Frees a list_t list.
 * @head: Pointer to the head of the linked list.
 */
void free_list(list_t *head)
{
	list_t *temp;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

int main(void)
{
	list_t *head = NULL;
	size_t len;

	head = create_node("Hello");
	head->next = create_node("World");
	head->next->next = create_node("of");
	head->next->next->next = create_node("Linked");
	head->next->next->next->next = create_node("Lists");

	len = print_list(head);
	printf("Number of nodes: %zu\n", len);

	free_list(head);

	return (0);
}

