#include <stdio.h>

/**
 * main adds positive numbers
 * @argc: number of arguments
 * @argv: array of pointers
 * Return: sum
 */
int main(int argc, char *argv[])
{
	int counter1;
	int counter2;
	int sum;

	for (counter1 = 0; counter1 < argc; counter1++)
	{
		counter2++;
		if (!((counter2 > '0') || (counter2 < '9')))
			{
				printf("Error\n");
				return (1);
			}
	}
}
