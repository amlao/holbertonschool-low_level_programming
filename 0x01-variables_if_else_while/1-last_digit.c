#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int nvm;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	nvm = n %10;
	if (n > 5)
	{
		printf("Last digit of %i is %i andis greater than 5\n", n, nvm);
	}
	else if (n = 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, nvm);
	}
	else if (0 < n <6 )
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n"
		       , n, nvm);
       	}
	return (0);
}