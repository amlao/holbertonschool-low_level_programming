#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sume of all its parameters
 * @n: number of arguments
 * Return: The sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int counter = 0;
	unsigned int sum = 0;
	va_list valist;

	if (n == 0)
		return (0);

	va_start(valist, n);

	while (counter < n)
	{
		sum += va_arg(valist, int);
		counter++;
	}

	va_end(valist);
	return (sum);
}
