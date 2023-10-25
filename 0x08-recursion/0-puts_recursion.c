#include "main.h"
/**
 * _puts_recursion - lkdnf lksnv skn lknskn snfvc
 * @s: array of strings
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
	}
	else
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
}
