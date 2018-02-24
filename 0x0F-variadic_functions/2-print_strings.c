#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int counter = 0;
	char *s;
	va_list valist;

	va_start(valist, n);

	for (counter = 0; counter < n; counter++)
	{
		s = va_arg(valist, char *);
		if (s == NULL)
			s = "(nil)";
		if (separator == NULL || counter == (n - 1))
			printf("%s", s);
		else
			printf("%s%s", s, separator);
	}
	printf("\n");
	va_end(valist);
}
