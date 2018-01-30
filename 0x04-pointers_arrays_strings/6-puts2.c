#include "holberton.h"

/**
 * puts2 -prints one char out of 2 of a string
 * @*str: string
 */
void puts2(char *str)
{
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
		j++;
	}
	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
