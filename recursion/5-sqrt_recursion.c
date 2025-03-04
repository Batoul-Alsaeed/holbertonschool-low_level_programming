#include "main.h"

/**
 * find_sqrt - Helper function to find square root recursively
 * @n: The number to find square root of
 * @i: The current divisor to check
 *
 * Return: Square root of n or -1 if no natural square root exists
 */
int find_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (find_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to calculate the square root of
 *
 * Return: Natural square root, or -1 if no natural root exists
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (find_sqrt(n, 1));
}
