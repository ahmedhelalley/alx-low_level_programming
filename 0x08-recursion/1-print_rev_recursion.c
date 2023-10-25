#include "main.h"
/**
 * _print_rev_recursion - skdn jv nsv skjv skjvc
 * @s: array of strings
*/
void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
