#include "main.h"
/**
 * *_memset - oijwda ijasijc cv u9hdcuv9h
 * @s: oidjfs jsidjm jfvih9udhsf
 * @b: ojwda iihda ihhahsic sd uhsvdiv
 * @n: eowiafn ijfvn j fgnsivndv
 * Return: ptr
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;
	return (ptr);
}
/**
 * *_calloc - ijhdf hiudwh uhdfs
 * @nmemb: ioje iojiodjcsd
 * @size: lkdf oijsdv onuisnv
 * Return: m
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(sizeof(int) * nmemb);
	if (m == 0)
		return (NULL);
	_memset(m, 0, sizeof(int) * nmemb);
	return (m);
}
