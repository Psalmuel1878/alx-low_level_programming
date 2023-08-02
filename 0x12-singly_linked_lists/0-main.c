#include <stdio.h>
#include "list.h"

int main()
{
    list_t node1 = { "Hello", 5, NULL };
    list_t node2 = { "World", 5, NULL };
    list_t node3 = { "ChatGPT", 7, NULL };

    node1.next = &node2;
    node2.next = &node3;

    size_t count = print_list(&node1);

    printf("Number of nodes: %zu\n", count);

    return 0;
}:
