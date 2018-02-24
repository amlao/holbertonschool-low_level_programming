#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - print char
 * @args: arguments passed
 */
void print_char(va_list args)
{
	printf("%s", va_arg(args, int));
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
	char *s = va_arg(args, char *);

	if (*s == NULL)
		printf("(nil)");
}


/**
 * print_all - a function that prints anything
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	int counter1 = 0;
	int counter2 = 0;
	char *separator[] = ["", ", "];
	char *separray[] = separator[0];
	va_list args;

	style styletypes[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_fl},
		{"s", print_str}
	};
	separator = ", ";
	while (format[counter] != '\0')
	{
		while(stylestypes[counter2].f == NULL)
		{
			if (styletypes[counter1].st == format[counter1])
			{
				printf("%s", separray);
				(format[counter1].f(type));
			}
			counter2++;
		}
		counter1++;
		separray = separator[1];
	}
	printf("\n");
}
