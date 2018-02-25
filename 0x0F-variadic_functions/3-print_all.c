#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - print char
 * @args: arguments passed
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * print_int - print integer
 * @args: arguments passed
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * print_fl - print floar
 * @args: arguments passed
 */
void print_fl(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * print_str - print string
 * @args: arguments passed
 */
void print_str(va_list args)
{
	char *s;

	s = va_arg(args, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}


/**
 * print_all - a function that prints anything
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	int counter1 = 0;
	int counter2 = 0;
	char *separator = "";
	char *separator2 = ", ";
	va_list args;

	style type[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_fl},
		{"s", print_str},
		{NULL, NULL}
	};
	va_start(args, format);
	while (format[counter1] != '\0' && format != NULL)
	{
		counter2 = 0;
		while (type[counter2].st != NULL)
		{
			if (format[counter1] == *(type[counter2].st))
			{
				printf("%s", separator);
				type[counter2].f(args);
			}
			counter2++;
		}
		separator = separator2;
		counter1++;
	}
	printf("\n");
	va_end(args);
}
