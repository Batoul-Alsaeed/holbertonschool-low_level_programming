#include "main.h"

/**
 * print_alphabet -(a-z)
 *
 * Return: (vod)
 */
void print_alphabet(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i;

	for (i = 0; alphabet[i] != '\0'; i++)
	{
		_putchair(alphabet[i]);
	}
}
