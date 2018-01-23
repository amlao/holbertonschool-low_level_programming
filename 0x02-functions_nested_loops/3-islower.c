#include "holberton.h"

/**
 *_isalpha - checks for alphabetic character
 *
 *@c - character to check
 *
 *Return 1 if true
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
