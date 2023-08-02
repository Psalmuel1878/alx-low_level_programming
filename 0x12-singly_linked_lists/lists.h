#ifndef LIST_H
#define LIST_H

#include <stddef.h>

/**
 * struct list_s - linked list structure
 * @str: string
 * @next: points to the next node
 */
typedef struct list_s
{
	char *str;
	struct list_s *next;
} list_t;

/* Function prototype */
size_t print_list(const list_t *h);

#endif /* LIST_H */

