#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: size of string
 * @argv: array of string
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
