#include "holberton.h"

/**
 * print_alphabet - prints alphabet in lower case with new line
 */
void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
