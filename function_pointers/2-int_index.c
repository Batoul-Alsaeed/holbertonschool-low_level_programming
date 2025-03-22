#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: The array to search in
 * @size: The number of elements in the array
 * @cmp: A pointer to the function to be used to compare values
 *
 * Return: The index of the first element for which cmp does not return 0,
 *         or -1 if no such element is found or if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
