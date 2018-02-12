#include <stdio.h>

/**
 * main - prints the program name
 * @argc: the size of argv
 * @argv: array of the string
 * Return: name of program, followed by a new line
 */
int main(int __attribute__((__unused__))argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
