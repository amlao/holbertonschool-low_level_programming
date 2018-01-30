#include "holberton.h"

/**
 * swap_int - swaps the values of two integers
 * @*a: first int swap
 * @*b: second int swap
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;

	*a = c;
	*b = d;
	*a = *b;
	*b = c;
}
