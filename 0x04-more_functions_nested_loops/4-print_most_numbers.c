#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9 followed by a new line
 *
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num == 2 || num == 4)
			continue;
		_putchar(i + 8);
	}
	_putchar("\n");
}
