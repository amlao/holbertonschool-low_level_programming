#include "holberton.h"

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b" pointer to a string
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;

	for (; *b; b++)
	{
		if (*b == '1')
			i = (i << 1) | 1;
		else if (*b == '0')
			i <<= 1;
		else
			return (0);
	}
	return (i);
}
