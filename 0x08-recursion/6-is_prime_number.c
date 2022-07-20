#include "main.h"

int prime_checker(int n, int i);

/**
 * is_prime_number - checks if a number is prime or not
 *
 * @n: number
 * Return: 1 if the number is a prime number otherwise return 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_checker(n, 2));
}

/**
 * prime_checker - checks to identify prime numbers
 *
 * @n: integer number to be checked
 * @i: integer counter
 * Return: 1 if the number is a prime number
 * otherwise return 0
 */

int prime_checker(int n, int i)
{
	if (i == n)
		return (1);
	if (!(n % i))
		return (0);

	return (prime_checker(n, (i + 1)));
}
