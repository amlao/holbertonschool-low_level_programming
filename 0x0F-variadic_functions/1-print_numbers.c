#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: the string to be printed between numbers
 * @n: number of integers passed
 */
void print_numbers(const char *separator, const unsigned int n, ...);
{
	unsigned int counter = 0;
	va_list valist;

	va_start(valist, n);
	for (counter = 0; counter < n, counter++)
	{
		printf("%d", va_arg(valist, int));
		if (separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
