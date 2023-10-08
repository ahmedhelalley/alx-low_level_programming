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
char ch = 'z';

while (ch >= 97)
{
	putchar(ch);
	ch--;
}
putchar('\n');
return (0);
}
