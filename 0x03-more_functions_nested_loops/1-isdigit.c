#include "holberton.h"

/**
 * _isdigit - checks for a digit 0 through 9
 * @c: digit to be tested
 * Return: 1 if a digit else 0
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	return (0);
}
