#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: Here is some description for the program
 *
 * Return: 0 on success
*/

int main(void)
{
int digit = 0;
while (digit <= 9)
{
	putchar(digit + 48);
	if (digit != 9)
	{
		putchar(' ');
		putchar(',');
	}
}
putchar('\n');
return (0);
}
