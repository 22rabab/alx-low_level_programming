#include "main.h"

/**
 * print_line - draws straight line of underscores
 * @n: number time character '_' should print
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}

		_putchar('\n');
	}
}
