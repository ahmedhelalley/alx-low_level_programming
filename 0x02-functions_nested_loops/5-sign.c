#include "main.h"
/**
 * print_sign - lksdfv fnv kdfz
 *
 * @n: integer ksdv fv jf v
 *
 * Return: 1 or -1 or 0 df dfi dik
*/

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
