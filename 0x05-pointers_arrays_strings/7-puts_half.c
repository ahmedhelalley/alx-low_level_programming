#include "main.h"
/**
 * puts_half - kdsnlknf lksnlkn lsknxvlkn
 * @str: array of charaters
*/
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != 0; ++i)
		;
	for (i /= 2; str[i] != '0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}