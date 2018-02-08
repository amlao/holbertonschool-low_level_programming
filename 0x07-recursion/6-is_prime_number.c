#include "holberton.h"

/**
 * prime - tests input
 * @i: number used to divide
 * @n: number given
 * Return: 1 if prime, else 0
 */
int prime(int i, int n)
{

	if (n < 2)
		return (0);
	if (i == n)
		return (1);
	if(n % i == 0)
		return (0);


	return (prime(i + 1, n));
}

/**
 * is_prime_number - tests if prime number
 * @n: number to be tested
 * Return: 1 if prime number, if else 0
 */

int is_prime_number(int n)
{
	return (prime(2, n));
}
