#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

skiplist_t *linear_skip(skiplist_t *list, int value) {
    if (list == NULL)
        return NULL;

    skiplist_t *current = list;
    skiplist_t *express = list;
    size_t step = sqrt(list->express_size);

    while (express && express->n < value) {
        current = express;
        express = express->express;

        printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
    }

    printf("Value found between indexes [%lu] and [%lu]\n",
           current->index, express->index);

    while (current) {
        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
        if (current->n == value)
            return current;

        current = current->next;
    }

    return NULL;
}

