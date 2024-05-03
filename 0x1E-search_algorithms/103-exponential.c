#include "search_algos.h"

/**
 * exponential_search - EXponential search algorithm
 * @array: the pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located,
 *				 -1 if the value doesn't presented on the array
*/
int exponential_search(int *array, size_t size, int value)
{
	int idx = 1, low, high;

	if (!array)
		return (-1);

	if (array[0] == value)
		return (0);

	while (idx < (int)size && array[idx] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", idx, array[idx]);
		idx *= 2;
	}

	low = idx / 2;
	high = min(idx, (int)size - 1);
	printf("Value found between indexes [%d] and [%d]\n", low, high);
	return (binary_search_for_exponenial(array, low, high, value));
}

/**
 * min - Find the mininum of two numbers
 * @first_num: the first number
 * @second_num: the second number
 * Return: smallest one in value
*/
int min(int first_num, int second_num)
{
	if (first_num < second_num)
		return (first_num);

	return (second_num);
}

/**
 * binary_search_for_exponenial - Binary search algorithm
 * @array: the pointer to the first element of the array to search in
 * @low: the low index
 * @high: the high index
 * @value: the value to search for
 * Return: the first index where value is located,
 *				 -1 if the value doesn't presented on the array
*/
int binary_search_for_exponenial(int *array, int low, int high, int value)
{
	int middle;

	if (!array)
		return (-1);

	while (low <= high)
	{
		middle = low + (high - low) / 2;

		print_array(array, low, high + 1);

		if (array[middle] == value)
			return (middle);

		if (array[middle] > value)
			high = middle - 1;
		else
			low = middle + 1;
	}
	return (-1);
}

/**
 * print_array - Prints the array elements
 * @array: the array to be printed
 * @start: the start index
 * @end: the end index
*/
void print_array(int *array, int start, int end)
{
	int idx;

	printf("Searching in array: ");
	for (idx = start; idx < end - 1; idx++)
		printf("%d, ", array[idx]);

	printf("%d\n", array[idx]);
}
