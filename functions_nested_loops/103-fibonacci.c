#include <stdio.h>

/**
 * main - Finds and prints the sum of even Fibonacci numbers below 4,000,000
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int a = 1, b = 2, next, sum = 2;

	while (b <= 4000000)
	{
		next = a + b;
		a = b;
		b = next;

		if (b % 2 == 0)
			sum += b;
	}

	printf("%ld\n", sum);
	return (0);
}
