#include "main.h"
/**
 * *_strchr - diojs oisjd oisj ijjijo
 * @s: lnds knksn lknszlkn xfsd
 * @c: lkjds lkjoljdn ioklndslknkl
 * Return: index of character
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[0] + i);
	}
	return ('\0');
}
