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
	nvm = n % 10;
	if (nvm > 5)
	{
		printf("Last digit of %d and is greater than 5\n", n, nvm);
	}
	else if (nvm = 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, nvm);
        }
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not\n"
		       , n, nvm);
	}
	return(0);
}
