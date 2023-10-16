#include "main.h"
/**
 * *_strcpy - ekndvlk kldnfvlknelkd ldaknfl
 * @dest: kdnf kdfnv dlkfnv
 * @src: lasjdnf dnfv dofvkevkejfoie
 * Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}
