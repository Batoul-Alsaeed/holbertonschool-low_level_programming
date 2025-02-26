#include "main.h"
#include <limits.h>

/**
 * _atoi - Converts a string to an integer
 * @s: Pointer to the string
 *
 * Return: Converted integer, or 0 if no numbers found
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, started = 0;
	long result = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			if ((result * 10 + (s[i] - '0')) > INT_MAX)
			{
				if (sign == 1)
					return (INT_MAX);
				else
					return (INT_MIN);
			}

			result = result * 10 + (s[i] - '0');
			started = 1;
		}
		else if (started)
			break;

		i++;
	}

	return ((int)(result * sign));
}
