#include "holberton.h"

/**
 * flip_bits - returns the number of bits you need to flip to get
 * from one number to another
 * @n: first number
 * @m: the number to flip
 * Return: the number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;
	unsigned long int hold;

	hold = n ^ m;
	for (; hold > 0; hold = hold >> 1)
	{
		count += hold & 1;
	}
	return (count);
}
