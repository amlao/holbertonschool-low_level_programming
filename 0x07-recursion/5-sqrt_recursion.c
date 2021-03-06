#include "holberton.h"

/**
 * root - find if it is square root
 * @start: base
 * @end: iterator
 * Return: if square root or not
 */
int root(int start, int end)
{
	if (start * start == end)
	{
		return (start);
	}
	if (end < 1)
	{
		return (-1);
	}
	if (start * start > end)
	{
		return (-1);
	}
	return (root(start + 1, end));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find square root of
 * Return: -1 if function does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	return (root(1, n));
}
