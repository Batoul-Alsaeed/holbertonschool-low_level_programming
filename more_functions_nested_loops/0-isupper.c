#include "main.h"

/**
 * _isupper - Checks if a character is uppercase
 * @c: Character to check (ASCII value)
 * Return: 1 if uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
