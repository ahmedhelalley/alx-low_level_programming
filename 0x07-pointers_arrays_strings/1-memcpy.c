#include "main.h"
/**
 * *_memcpy - kjkjd ksnvs nksdkn kjndn jnskdn kjsdn
 * @dest: destination
 * @src: source
 * @n: sodn oinoinx
 * Return: destination
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
