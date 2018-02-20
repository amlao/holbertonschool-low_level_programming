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
	char *newname;
	char *newowner;
	dog_t *goodboy;

	for (length1 = 0; name[length1] != '\0'; length1++)
		;
	for (length2 = 0; owner[length2] != '\0'; length2++)
		;
	goodboy = malloc(sizeof(dog_t));
	if (goodboy == NULL)
	{
		return (NULL);
	}
	newname = malloc(sizeof(char) * length1 + 1);
	if (newname == NULL)
	{
		free(goodboy);
		return (NULL);
	}

	for (counter = 0; counter < length1; counter++)
		newname[counter] = name[counter];
	newname[counter] = '\0';
	goodboy->name = newname;

	goodboy->age = age;

	newowner = malloc(sizeof(newowner) * length2);
	if (newowner == NULL)
	{
		free(goodboy);
		free(newname);
		return (NULL);
	}
	for (counter = 0; counter < length2; counter++)
		newowner[counter] = owner[counter];
	goodboy->owner = newowner;
	return (goodboy);
}
