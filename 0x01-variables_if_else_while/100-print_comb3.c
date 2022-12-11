#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single numberof base 10
 * starting from 0, followed by a new line
 * Return: 0
 */
int main(void)
{
	int c = 0;

	while (c < 88)
	{
		putchar(46 + c);
		if (c != 87)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}
