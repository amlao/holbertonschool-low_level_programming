#include "holberton.h"

/**
 * print_sign - prints the sign of a number
 * @n: number to compare
 * Return: (1) if greater than zero, (0) if is zero, or (-1) if less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
