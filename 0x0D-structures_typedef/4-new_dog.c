#include "dog.h"
#include <stdlib.h>

/**
 * *new_dog - create a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int counter = 0;
	int lnegth1 = 0;
	int length2 = 0;
	dog_t *goodboy;
	char *n;
	char *o;

	for (length1 = 0; name[length1] != '\0'; length1++)
		;
	for (length2 = 0; owner[length2] != '\0'; length2++)
		;
	goodboy = malloc(sizeof(dog_t));
	if (goodboy == NULL)
	{
		return(NULL);
	}
	n = malloc(sizeof(char) * length1);
	if (n != NULL)
	{
		free(goodboy);
		return (NULL);
	}
	for (counter = 0; name[counter] != 0; counter++)
		n[counter] = name[counter];
	o = malloc(sizeof(char) * length2);
	if (o != NULL)
	{
		free(goodboy);
		free(o);
		return (NULL);
	}
	for (counter = 0; owner[counter] != 0; counter++)
		o[counter] = owner[counter];
}
