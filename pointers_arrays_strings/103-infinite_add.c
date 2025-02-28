#include "main.h"

/**
 * infinite_add - Adds two numbers stored as strings
 * @n1: First number (as string)
 * @n2: Second number (as string)
 * @r: Buffer to store the result
 * @size_r: Size of the buffer
 *
 * Return: Pointer to the result (r) or 0 if the result cannot be stored
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, carry, sum;

	for (i = 0; n1[i]; i++)
		;
	for (j = 0; n2[j]; j++)
		;

	if (i >= size_r || j >= size_r)
		return (0);

	r[size_r - 1] = '\0';
	k = size_r - 2;
	carry = 0;

	for (i--, j--; i >= 0 || j >= 0 || carry; i--, j--, k--)
	{
		if (k < 0)
			return (0);

		sum = carry;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';

		r[k] = (sum % 10) + '0';
		carry = sum / 10;
	}

	return (r + k + 1);
}
