#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - frees dogs
 * @d: srtuct dog
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d);
	}
}
