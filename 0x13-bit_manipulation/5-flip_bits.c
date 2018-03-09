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
	unsigned long int flip;

	flip = n ^ m;
	for (; flip > 0; flip >>= 1)
	{
		count += flip & 1;
	}
	return (count);
}
