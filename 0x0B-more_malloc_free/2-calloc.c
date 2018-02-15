#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory fo ran array using malloc
 * @nmemb: number of elements
 * @size: number of bytes
 * Return: NULL if malloc fails, else pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned char *s;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(size * nmemb);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		s[i] = 0;
	return (s);
}
