#include <stdio.h>

int recursive_binary_search(int *array, int low, int high, int value);

int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL)
        return -1;

    return recursive_binary_search(array, 0, size - 1, value);
}

int recursive_binary_search(int *array, int low, int high, int value)
{
    if (low <= high)
    {
        int mid = (low + high) / 2;
        printf("Searching in array: ");
        for (int i = low; i <= high; i++)
        {
            if (i != low)
                printf(", ");
            printf("%d", array[i]);
        }
        printf("\n");

        if (array[mid] == value)
            return mid;

        if (array[mid] < value)
            return recursive_binary_search(array, mid + 1, high, value);
        else
            return recursive_binary_search(array, low, mid - 1, value);
    }

    return -1;
}

