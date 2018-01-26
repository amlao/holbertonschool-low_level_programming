#include "holberton.h"

/**
 * print_most_numbers - print the numbers from 0 to 9 followed by a new line
 */
void print_most_numbers(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		if (!(x == '2') && !(x == '4'))
		{
			_putchar(x);
		}
	}
	_putchar('\n');
}
