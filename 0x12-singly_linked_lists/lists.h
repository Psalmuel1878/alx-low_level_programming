#ifndef LISTS_H
#define LISTS_H

typedef struct list_s {
    char *str;
    struct list_s *next;
} list_t;

list_t *add_node(list_t **head, const char *str);

#endif /* LISTS_H */

