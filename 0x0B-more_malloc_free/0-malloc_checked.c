#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: size
 */
void *malloc_checked(unsigned int b)
{
	char *s;

	s = malloc(sizeof(b));
	if (s == NULL)
		exit(98);
	return (s);
}
