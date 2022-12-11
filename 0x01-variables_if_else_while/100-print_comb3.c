#include <stdio.h>

/**
 * main - print all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	int d = 0;

	while (d < 10)
	{
		c = a;
		while (c < 10)
		{
			if (d != c && d < c)
			{
				putchar('m' + d);
				putchar('m' + c);

				if (c + d != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			c++;
		}
		d++;
	}
	putchar('\n');
	return (0);
}
