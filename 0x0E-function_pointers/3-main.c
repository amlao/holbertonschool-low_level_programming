#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main file
 * @argc: number of arguments
 * @argv: arguments passed
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int result;
	int (*hold)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	hold = get_op_func(argv[2]);
	if (hold == NULL || arv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if (b == 0 && (hold == op_mod || hold == op_div))
	{
		printf("Error\n");
		exit(100);
	}
	result = hold(a, b);
	printf("%d\n", result);
	return (0);
}
