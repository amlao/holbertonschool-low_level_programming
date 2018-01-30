#include "holberton.h"


/**
 * reset_to_98 - a function that takes a pointer to an int as parameter and updates the value it points to to 98
 * @*n: int to be updated
 */
void reset_to_98(int *n)
{
	int a = 98;
	int b = 402;
	int c = a;

	if (c > b)
	{
		*n = b;
	}
	else
	{
		*n = a;
	}
}
