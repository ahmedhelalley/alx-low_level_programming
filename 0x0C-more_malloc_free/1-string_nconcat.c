#include "main.h"
/**
 * *string_nconcat - okdjsf ocknsiuncviunuidsc
 * @s1: dslnfc onsovnc
 * @s2: lkdcnv okndncv
 * @n: ksdjc oijfijvisdoifnv
 * Return: str
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, s1_length, s2_length;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1_length = 0; s1[s1_length] != '\0'; s1_length++)
		;
	for (s2_length = 0; s2[s2_length] != '\0'; s2_length++)
		;
	str = malloc(s1_length + n + 1);
	for (i = 0; s1 != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
