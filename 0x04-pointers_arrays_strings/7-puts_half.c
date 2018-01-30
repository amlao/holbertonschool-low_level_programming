#include "holberton.h"

/**
 * puts_half(char *str) - prints half of a string
 * @str: string
 */
void puts_half(char *str)
{
	int i;
	int j;
	int h;

	for (i = 0; str[i] != '\0'; i++)
		j++;

	if (j % 2 != 0)
		h = (j + 1) / 2;
	else
		h = j / 2;

	for (i = h; i < j; i++)
		_putchar(str[i]);
	_putchar('\n');
}
