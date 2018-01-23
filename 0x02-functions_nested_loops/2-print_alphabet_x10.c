#include "holberton.h"

/**
 * print_alphabet_x10 - print alphabet 10 times in lowercase
 */
void print_alphabet_x10(void)
{
	int x;
	int y;

	for (x = 0; x < 11; x++)
	{
		_putchar('\n');
		for (y = 'a'; y <= 'z'; y++)
		{
			_putchar(y);
		}
	}
}
