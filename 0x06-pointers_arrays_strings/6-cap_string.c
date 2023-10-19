#include "main.h"
/**
 * isDelimiter - lkfng nkfns knksnvk nkfsn
 * @c: lkdsl lkenvln lekfnvlknklnc
 * Return: 0 or 1 or kdnsf nsndn
*/
int isDelimiter(char c)
{
	char delimiters[] = "\n\t ,;.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == delimiters[i])
			return (1);
	return (0);
}
/**
 * isLower - efdg jnefdng kenfn vkenf knfs
 * @c: ldsknf lslgn vlknelkdfng lnkfd
 * Return: flkjg efljg lkfjd jfdk
*/
int isLower(char c)
{
	return (c >= 97 && c <= 122);
}
/**
 * *cap_string - fdnv lnefn nfsn velfnvc
 * @s: nsdlkn lnefdklng lesfndk
 * Return: ens nerkgnf kndfgn kfn
*/
char *cap_string(char *s)
{
	char *ptr = s;
	bool foundDelimiter;

	while (*s)
	{
		if (isDelimiter(*s))
			foundDelimiter = 1;
		else if (isLower && foundDelimiter)
		{
			*s -= 32;
			foundDelimiter = 0;
		}
		else
			foundDelimiter = 0;
		s++;
	}
	return (ptr);
}
