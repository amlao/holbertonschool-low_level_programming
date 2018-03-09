#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: integer
 * @index: index
 * Return: the value of the bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int size;

	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);
	size = (n >> index) & 1;
	return (size);
}
