#include <stddef.h>
#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to search in
 * @accept: the set of characters to match
 *
 * Return: pointer to the first matching character in s,
 *         or NULL if no match is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
