#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * Returns the value of the last digit
 */
int print_last_digit(int x)
{
	_putchar((x % 10) + '0');
	return ((x % 10) * -1);
}
