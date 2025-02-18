#include "main.h"

/**
 * print_alphabet_x10 - This function prints the lowercase alphabet 10 times,
 *
 * each followed by a new line.
 *
 * Rerturn: (void)
 */
void print_alphabet_x10(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; alphabet[j] != '\0'; j++)
		{
			_putchar(alphabet[j]);
		}
	}
}
