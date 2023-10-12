#include <stdio.h>

/**
 * print_diagonal - kjngjnvsjd sdnfv nsd
 * @n: lksdnf sdknf dknf
*/

void print_diagonal(int n)
{
	int line, space;

	if (n <= 0)
		putchar('\n');
	else
	{
		for (line = 1; line <= n; line++)
		{
			for (space = 1; space <= line; space++)
				putchar(' ');
			putchar(92);
			putchar('\n');
		}
	}
}
