#include "holberton.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int count;
	int length = 0;

	for (count = 0; dest[count] != '\0'; count++)
		length++;
	for (count = 0; count < n; count++)
		dest[length + count] = src[count];
	dest[length + count] = '\0';
	return (dest);
}
