#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: string whose lenght is to be found
 *
 * Returns: the lenght
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;

	return (count);
}
