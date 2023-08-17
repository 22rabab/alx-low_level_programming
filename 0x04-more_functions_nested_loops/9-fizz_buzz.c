#include "main.h"

/**
 * main - 1 - 100 followed by new line
 *     numbers that are multiples of 3 print Fizz
 *     numbers that are multiples of 5 print Buzz
 *     numbers that are multiples of 3 and 5 print FizzBuzz
 *     each number and word to be separated by space
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			_putchar('FizzBuzz ');
		}
		else if (i % 3 == 0)
		{
			_putchar('Fizz ');
		}
		else if (i % 5 == 0)
		{
			_putchar('Buzz ');
		}
		else
		{
			_putchar('%d ', i);
		}
	}

	_putchar('\n');


	return (0);
}
