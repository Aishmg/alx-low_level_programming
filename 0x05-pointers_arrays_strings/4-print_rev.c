#include "main.h"

/**
 * print_rev - print string in reverse order
 * @s: string to be print
 *
 * Return: void
 */
void print_rev(char *s)
{
	int count = 0;

	while (*s)
	{
		s++;
		count++;
	}

	while (count)
	{
		s--;
		_putchar(*s);
		count++;
	}

	_putchar('\n');
}
