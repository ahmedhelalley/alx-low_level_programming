#included "main.h"
/**
 * *_strstr - sln hsz oihsz iohxc oic zxvoihh
 * @haystack: lksdn lxvkc jiocjv oicjvio
 * @needle: lksn xcvn nv vn jh
 * Return: pointer
*/
char *_strstr(char *haystack, char *needle)
	{
	if (haystack == NULL || needle == NULL)
	{
	return (NULL);
	}

	char *h, *n;

	if (*needle == '\0')
	{
	return (haystack);
	}

	while (*haystack)
	{
	h = haystack;
	n = needle;

	while (*n && *h == *n)
	{
		h++;
		n++;
	}

	if (*n == '\0')
	{
	return (haystack);
	}

	haystack++;
	}

	return (NULL);
}
