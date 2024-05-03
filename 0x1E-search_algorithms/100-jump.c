#include "search_algos.h"

/**
 * jump_search - Jump search algorithm
 * @array: the pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located,
 *				 -1 if the value doesn't presented on the array
 */
int jump_search(int *array, size_t size, int value)
{
	int step = sqrt((int) size);
	int prev = 0;

	if (!array)
		return (-1);

	while (array[prev] < value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev += step;
		if (prev >= (int) size)
		{
			printf("Value found between indexes [%d] and [%d]\n", prev - step, prev);
			return (linear_search_for_jump(array, prev - step, size - 1, value));
		}
	}

	printf("Value found between indexes [%d] and [%d]\n", prev - step, prev);

	return (linear_search_for_jump(array, prev - step, prev, value));
}

/**
 * linear_search_for_jump - linear search for jump algorithm
 * @array: the array to be sorted
 * @start: the start index
 * @end: the end index
 * @value: the value to be searched for
 * Return: the first index where value is located,
 *				 -1 if the value doesn't presented on the array
*/
int linear_search_for_jump(int *array, size_t start, size_t end, int value)
{
	size_t idx;

	for (idx = start; idx <= end; idx++)
	{
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
	}

	return (-1);
}
