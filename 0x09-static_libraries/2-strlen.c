#include "main.h"
/**
 * _strlen - klnnr sdkn sd ndsklnskln
 * @s: array of strings
 * Return: length of the string
*/
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
	length++;
	s++;
	}
	return (length);
}
