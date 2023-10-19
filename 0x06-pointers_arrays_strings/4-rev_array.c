#include "main.h"
/**
 * reverse_array - djsh sdjf jksdkj kjds
 * @a: array of integers
 * @n: kdfs dsfookdns sdfn
*/
void reverse_array(int *a, int n)
{
	int j;

	for (j = n - 2; j >= 0; j--)
	{
		_putchar(a[j]);
		if (j != 0)
		{
		_putchar(",");
		_putchar(" ");
		}
	}
}
