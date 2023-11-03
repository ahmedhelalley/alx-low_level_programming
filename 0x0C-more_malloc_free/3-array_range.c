#include "main.h"
/**
 * *array_range - kjdnc jdvndbsub udsbudsfnvu
 * @min: errrrrrrrrr
 * @max: gggggggggggggg
 * Return: ptr
*/
int *array_range(int min, int max)
{
	int *ptr;
	int length, i;

	if (min > max)
		return (NULL);
	length = max - min + 1;
	ptr = malloc(sizeof(int) * length);
	if (!ptr)
		return (NULL);
	for (i = 0; i < length; i++)
	{
		ptr[i] = min++;
	}
	return (ptr);
}
