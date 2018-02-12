#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of strings
 * Return: 0 if successful, 1 if program does not receive 2 arguments
 */
int main( int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
