#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

listint_t *jump_list(listint_t *list, size_t size, int value) {
    if (list == NULL)
        return NULL;

    size_t jump_step = sqrt(size);
    listint_t *current = list, *prev = NULL;

    while (current->n < value) {
        prev = current;
        for (size_t i = 0; i < jump_step && current->next != NULL; ++i) {
            current = current->next;
        }
        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
        if (current->next == NULL)
            break;
    }

    printf("Value found between indexes [%lu] and [%lu]\n",
           prev->index, current->index);

    while (prev->index <= current->index) {
        printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
        if (prev->n == value)
            return prev;

        prev = prev->next;
    }

    return NULL;
}
