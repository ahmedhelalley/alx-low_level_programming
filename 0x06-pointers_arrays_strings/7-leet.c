#include "main.h"
/**
 * *leet - ndksnk nkdnsnf kjsdk sdkj
 * @c: kd nskn knsknd nskdjvn
 * Return: cp
*/
char *leet(char *c)
{
	char *cp = c;
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	int value = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*c)
	{
		for (i = 0; i < 4; i++)
		{
			if (*c == key[i] || *c == key[i] + 32)
			{
				*c = 48 + value[i];
			}
		}
		c++;
	}
	return (cp);
}
