#include "main.h"
/**
 * *_strncpy - lkdnvlkn nedfn odoisjvdv
 * @dest: lkdfv ldmsv mdsvkl
 * @src: lkmfdlm lkmfdm sdknlksv
 * @n: dsmf mdksm fkldnsn fksldn
 * Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
