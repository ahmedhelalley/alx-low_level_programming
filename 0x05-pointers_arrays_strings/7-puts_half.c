#include "main.h"
/**
 * puts_half - kdsnlknf lksnlkn lsknxvlkn
 * @str: array of charaters
*/
void puts_half(char *str)
{
	int i;
	int start_index;
	int length = 0;
	char *current = str;

	while (*current != '\0')
	{
		length++;
		current++;
	}
	if (length % 2 == 0)
		start_index = length / 2;
	else
		start_index = (length + 1) / 2;
	for (i = start_index; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');

}
