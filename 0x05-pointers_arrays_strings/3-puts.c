#include "main.h"
/**
 * _puts - ksndn kzlnxc kncknsdv sdfsdsd
 * @str: string to be printed
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 48);
		str++;
	}
	_putchar('\n');
}
