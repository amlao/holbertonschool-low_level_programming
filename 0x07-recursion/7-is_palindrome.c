#include "holberton.h"

/**
 * slen - gets string length
 * @s: string to be read
 * Return: the length of the string
 */
int slen(char *s)
{
	if  (*s == '\0')
		return (0);
	return (slen(s + 1) + 1);
}
/**
 * pal - find the matching characters
 * @s: string to be read
 * @start: beginning of the string
 * @end: end of the string
 * Return: string match
 */
int pal(char *s, int start, int end)
{
	if (s[start] != s[end])
		return (0);
	if (start >= end)
		return (1);
	return (pal(s, start + 1, end - 1));
}
/**
 * is_palindrome - check if string is a palindrome
 * @s: string to be read
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	if (s == '\0')
		return (1);
	return (pal(s, 0, slen(s) - 1));
}
