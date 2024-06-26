#include "search_algos.h"

/**
 * interpolation_search - Interpolation search algorithm
 * @array: the pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located,
 *				 -1 if the value doesn't presented on the array
*/
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0, high = (int)size - 1;
	int pos;

	if (!array)
		return (-1);

	while (low <= high)
	{
		pos = low +
					(((double)(high - low) / (array[high] - array[low])) *
					(value - array[low]));

		if (pos >= (int)size)
		{
			printf("Value checked array[%d] is out of range\n", pos);
			return (-1);
		}

		printf("Value checked array[%d] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);

		if (value > array[pos])
			low = pos + 1;
		else
			high = pos - 1;
	}

	return (-1);
}
