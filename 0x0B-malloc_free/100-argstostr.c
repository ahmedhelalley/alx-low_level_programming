#include "main.h"
/**
 * _strlen - lsd sdkfnxckn sdncv
 * @s: lsdfn osndfiovniosd
 * Return: ldsjfx lkdkxzfnc
*/
int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;
	return (size);
}
/**
 * *argstostr - sdjf coshdfzxhviscxj ishzcv
 * @ac: sidjf oihsdixhc iuhsdc
 * @av: dskx shdijxhvi
 * Return: sidjfx oihsdzf
*/
char *argstostr(int ac, char **av)
{
	int i = 0, nc = 0, j = 0, cmpt = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (; i < ac; i++; nc++)
		nc += _strlen(av[i]);
	s = malloc(sizeof(char) * nc + 1);
	if (s == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = o; av[i][j] != '\0'; j++, cmpt++)
			s[cmpt] = av[i][j];
		s[cmpt] = '\n'
		cmpt++;
	}
	return (s);
}
