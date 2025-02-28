#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer in a specific format
 * @b: The buffer to print
 * @size: The number of bytes in the buffer
 */
void print_buffer(char *b, int size)
{
	int offset, byte, i;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (offset = 0; offset < size; offset += 10)
	{
		printf("%08x: ", offset);

		for (byte = 0; byte < 10; byte++)
		{
			if (offset + byte < size)
				printf("%02x", b[offset + byte]);
			else
				printf("  ");

			if (byte % 2)
				printf(" ");
		}

		for (i = 0; i < 10 && offset + i < size; i++)
		{
			char c = b[offset + i];

			if (c >= 32 && c <= 126)
				printf("%c", c);
			else
				printf(".");
		}

		printf("\n");
	}
}
