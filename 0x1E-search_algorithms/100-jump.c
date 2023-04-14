#include "search_algos.h"

/**
 * jump_search - searches for a value in an array of
 * integers using the Jump search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int jump_search(int *array, size_t size, int value)
{
	int jump = sqrt(size);
	size_t i = 0, j, prev;

	if (array == NULL || size == 0)
		return (-1);

	do {

		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		prev = i;
		i = i + jump;
	} while (array[i] < value && i < size);
	printf("Value found between indexes [%ld] and [%ld]\n", prev, i);
	for (j = prev; j <= i && j < size; j++)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}
