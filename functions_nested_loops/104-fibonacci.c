#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long a = 1, b = 2, temp;
	unsigned long a_high, a_low, b_high, b_low;
	unsigned long temp_high, temp_low;
	int count;

	printf("%lu, %lu", a, b);

	for (count = 3; count <= 92; count++)
	{
	temp = a + b;
	printf(", %lu", temp);
	a = b;
	b = temp;
	}

	a_high = a / 1000000000;
	a_low = a % 1000000000;
	b_high = b / 1000000000;
	b_low = b % 1000000000;

	for (; count <= 98; count++)
	{
	temp_high = a_high + b_high;
	temp_low = a_low + b_low;

	if (temp_low > 999999999)
	{
		temp_high += 1;
		temp_low %= 1000000000;
	}

	printf(", %lu%09lu", temp_high, temp_low);

	a_high = b_high;
	a_low = b_low;
	b_high = temp_high;
	b_low = temp_low;
	}

	printf("\n");
	return (0);
}
