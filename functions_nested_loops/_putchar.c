#include <unistd.h>

/**
 * _putchar - stdout
 * @c:
 *
 * Return: 1 -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
