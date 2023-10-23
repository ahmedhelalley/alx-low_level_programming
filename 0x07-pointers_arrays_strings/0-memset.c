#include "main.h"
/**
 * *_memset - knckln vskldn lkndlknl
 * @s: lksdflk lsk lknsv nlkncklx
 * @n: dsk nklfndkl snkln lkn
 * @b: lsdkhf lk nlknkl nslkdn
 * Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
