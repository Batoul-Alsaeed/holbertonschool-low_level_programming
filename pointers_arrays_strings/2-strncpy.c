#include "main.h"

/**
 * _strncpy - Copies a string up to n characters
 * @dest: The destination buffer
 * @src: The source string
 * @n: Maximum number of characters to copy
 *
 * Return: Pointer to the destination string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
