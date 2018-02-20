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
	int length1 = 0;
	int length2 = 0;
	dog_t *goodboy;

	for (; name[length1] != '\0'; length1++)
		;
	for (; owner[length2] != '\0'; length2++)
		;
	goodboy = malloc(sizeof(dog_t));
	if (goodboy == NULL)
	{
		return (NULL);
	}
	goodboy->name = malloc(sizeof(goodboy->name) * length1);
	if (goodboy == NULL)
	{
		return (NULL);
	}
	for (counter = 0; counter < length1; counter++)
		goodboy->name[counter] = name[counter];
	goodboy->age = age;
	goodboy->owner = malloc(sizeof(goodboy->owner) * length2);
	if (goodboy == NULL)
	{
		return (NULL);
	}
	for (counter = 0; counter < length2; counter++)
		goodboy->owner[counter] = owner[counter];
	return (goodboy);
}
