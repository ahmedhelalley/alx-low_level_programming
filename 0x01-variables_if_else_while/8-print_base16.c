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
char ch = 'a';
int dec = 0;

while (dec <= 9)
{
	putchar(dec + 48);
	dec++;
}
while (ch < 'f')
{
	putchar(ch);
	ch++;
}
putchar('\n');
return (0);
}
