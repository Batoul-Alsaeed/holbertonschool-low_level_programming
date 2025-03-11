#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Creates a duplicate of the given string in dynamic memory
 * @str: The original string
 *
 * Return: Pointer to the new string or NULL if allocation fails
 */

char *_strdup(char *str)
{
	char *copy;
	unsigned int i, length = 0;

	if (str == NULL)
	return (NULL);

	while (str[length] != '\0')
	length++;

	copy = (char *)malloc(sizeof(char) * (length + 1));

	if (copy == NULL)
	return (NULL);

	for (i = 0; i < length; i++)
	copy[i] = str[i];

	copy[length] = '\0';

	return (copy);
}
