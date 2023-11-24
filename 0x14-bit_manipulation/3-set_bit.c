#include "main.h"
/**
 * set_bit - setting a bit to 1 at an index
 * @n: number passed
 * @index: index
 * Return: 1 or -1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return !!((*n |= 1L << index));
}
