#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: Number to print in binary
 */
void print_binary(unsigned long int n)
{
	int started = 0;
	unsigned long int mask = 1UL << 63;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (mask > 0)
	{
		if ((n & mask) != 0)
		{
			_putchar('1');
			started = 1;
		}
		else if (started)
		{
			_putchar('0');
		}
		mask >>= 1;
	}
}
