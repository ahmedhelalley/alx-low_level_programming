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
	char chr = 'a';

	while (chr <= 'z')
	{
		putchar(chr);
		chr++;
	}
	putchar('\n');
	return (0);
}
