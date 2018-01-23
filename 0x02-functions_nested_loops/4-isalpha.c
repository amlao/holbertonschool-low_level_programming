#include "holberton.h"

int _isalpha(int c)
{
	char c;

	if (islower(c))
	{
		_putchar(1);
	}
	else if (isalpha(c))
	{
		_putchar(1);
	}
	else
	{
		_putchar(0);
	}
	return (0);
}
