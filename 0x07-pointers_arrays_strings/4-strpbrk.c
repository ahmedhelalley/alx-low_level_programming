#included "main.h"
/**
 * *_strpbrk - sln hsz oihsz iohxc oic zxvoihh
 * @s: lksdn lxvkc jiocjv oicjvio
 * @accept: lksn xcvn nv vn jh
 * Return: pointer p
*/
char *_strpbrk(char *s, char *accept)
	{
	char *s_ptr;
	char *accept_ptr;

	for (s_ptr = s; *s_ptr != '\0'; s_ptr++)
	{
	for (accept_ptr = accept; *accept_ptr != '\0'; accept_ptr++)
	{
	if (*s_ptr == *accept_ptr)
	{
	return (s_ptr);
	}
	}
	}

	return (NULL);
}
