#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long fib1_lower = 1, fib1_upper = 0;
	unsigned long fib2_lower = 2, fib2_upper = 0;
	unsigned long fib_lower, fib_upper, carry;

	printf("%lu, %lu", fib1_lower, fib2_lower);

	for (count = 3; count <= 98; count++)
	{
		fib_lower = fib1_lower + fib2_lower;
		fib_upper = fib1_upper + fib2_upper;

		if (fib_lower >= 1000000000)
		{
			carry = fib_lower / 1000000000;
			fib_lower %= 1000000000;
			fib_upper += carry;
		}

		if (fib_upper > 0)
			printf(", %lu%09lu", fib_upper, fib_lower);
		else
			printf(", %lu", fib_lower);

		fib1_upper = fib2_upper;
		fib1_lower = fib2_lower;
		fib2_upper = fib_upper;
		fib2_lower = fib_lower;
	}

	printf("\n");
	return (0);
}
