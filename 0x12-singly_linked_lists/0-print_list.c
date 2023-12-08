#include <stdio.h>
#include "lists.h"

/**
 * print_list - print all the elements in the list list_t
 * @h: pointer to the list_t to be printed
 *
 * Return: The number of nodes printed
 */

size_t print_list(const list_t *h)
{
    size_t node_count = 0;

    printf("[");

    while (h != NULL) {
        if (h->str == NULL) {
            printf("[0] (nil)");
        } else {
            printf("[%lu] %s", h->len, h->str);
        }

        if (h->next != NULL) {
            printf(", ");
        }

        h = h->next;
        node_count++;
    }

    printf("]\n");

    return node_count;
}
