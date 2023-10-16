#include "main.h"
/**
 * rev_string - nkdnvkdsn dfnkndcn lkdcklsnf
 * @s: array of strings
*/
void rev_string(char *s)
{
	int length = 0;
	char *start = s;
	char *end = s;

	while (*end != '\0')
	{
	end++;
	length++;
	}
	end--;
	while (start < end)
	{
	char temp = *start;
	*start = *end;
	*end = temp;
	start++;
	end--;
	}
}

