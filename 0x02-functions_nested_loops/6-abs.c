#include "holberton.h"

/**
 * int _abs - computes absolute value of an integer
 * @x: integer to be checked
 * Return: absolute value
 */
int _abs(int x)
{
	if (x > 0)
	{
		return (x);
	}
	else
	{
		return (x * -1);
	}
	return (0);
}
