#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int flag = 0;

	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	if (n == 0)
		_putchar('0');
	while (mask > 0)
	{
		if ((n & mask) == 0)
		{
			if (flag != 0)
				_putchar('0');
		}
		else
		{
			_putchar('1');
			flag = 1;
		}
		mask = mask >> 1;
	}
}
