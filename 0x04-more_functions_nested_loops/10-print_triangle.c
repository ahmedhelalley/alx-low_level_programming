#include "main.h"

/**
 * print_triangle - odfngoif idfbodn dfngn
 * @size: lkdfklg kldnflkgn lkdnf
 * Return: 0 on success
*/

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if ((i + j) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
