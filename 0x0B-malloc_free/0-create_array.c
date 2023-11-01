#include "main.h"
/**
 * *create_array - klkdns dns isc ishcvj
 * @size: size of array
 * @c: one character
 * Return: 0 on fail and n on success
*/
char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);
	while (size--)
		n[size] = c;
	return (n);
}
