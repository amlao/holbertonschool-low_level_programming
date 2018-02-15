#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: size
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	char *s;

	s = malloc(b);
	if (s == NULL)
		exit(98);
	return (s);
}
