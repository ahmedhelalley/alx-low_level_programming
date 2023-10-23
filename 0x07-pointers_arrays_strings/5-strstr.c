#included "main.h"
/**
 * *_strpbrk - sln hsz oihsz iohxc oic zxvoihh
 * @haystack: lksdn lxvkc jiocjv oicjvio
 * @needle: lksn xcvn nv vn jh
 * Return: pointer
*/
char *_strpbrk(char *haystack, char *needle)
	{
	char *s_ptr;
	char *accept_ptr;

	for (s_ptr = haystack; *s_ptr != '\0'; s_ptr++)
	{
	for (accept_ptr = needle; *accept_ptr != '\0'; accept_ptr++)
	{
	if (*s_ptr == *accept_ptr)
	{
	return (s_ptr);
	}
	}
	}

	return (0);
}
