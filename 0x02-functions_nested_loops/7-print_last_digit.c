#include "main.h"
/**
 * print_last_digit - This func. prints last digit of a number fngfg.
 *
 * @x: nilre lksdan idnao ik
 *
 * Return: lastDigit of the given number
*/

int print_last_digit(int x)
{
	int lastDigit;

	if (n < 0)
		lastDigit = -1 * (n % 10);
	else
		lastDigit = n % 10;
	_putchar(lastDigit + 48);
	return (lastDigit);
}
