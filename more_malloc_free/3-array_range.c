#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers from min to max
 * @min: Minimum value (inclusive)
 * @max: Maximum value (inclusive)
 *
 * Return: Pointer to array or NULL
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min + i;

	return (arr);
}
