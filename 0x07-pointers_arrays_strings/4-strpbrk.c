#include "main.h"
/**
 * *_strpbrk - dkshdf hjs jkh kjhc zjkvc jk
 * @s: skjfd lksjv vljcz xcv
 * @accept: klhds h jkhvs jchv
 * Return: s
*/
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
	char *a = accept;

	while (*a != '\0')
	{
	if (*s == *a)
	{
	return (s);
	}
	a++;
	}
	s++;
	}
	return (0);
}
