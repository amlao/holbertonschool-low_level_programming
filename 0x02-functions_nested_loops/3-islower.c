#include "holberton.h"

/**
 * _islower - checks for lowercase alphabetic character
 * @c: character to check
 * Return: 1 if true else 0
 */
int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	return (0);
}
