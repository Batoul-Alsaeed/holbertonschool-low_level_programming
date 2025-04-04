#include "main.h"

/**
 * flip_bits - Counts the number of bits to flip to convert n to m
 * @n: The first number
 * @m: The second number
 *
 * Return: The number of bits that differ
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff)
	{
		count += diff & 1;
		diff >>= 1;
	}

	return (count);
}
