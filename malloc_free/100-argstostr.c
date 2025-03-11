#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments of the program into a single string
 * @ac: Argument count
 * @av: Argument vector (array of strings)
 *
 * Return: Pointer to the new string, or NULL if failure
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}

	str = (char *)malloc(sizeof(char) * (len + 1));

	if (str == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			str[k++] = av[i][j];
		str[k++] = '\n';
	}

	str[k] = '\0';
	return (str);
}
