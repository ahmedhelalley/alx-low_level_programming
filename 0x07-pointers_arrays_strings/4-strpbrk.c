#included "main.h"
/**
 * *_strpbrk - sln hsz oihsz iohxc oic zxvoihh
 * @s: lksdn lxvkc jiocjv oicjvio
 * @accept: lksn xcvn nv vn jh
 * Return: pointer p
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
		}
	}
}
