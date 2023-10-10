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

	if (x < 0)
		lastDigit = -1 * (x % 10);
	else
		lastDigit = x % 10;
	_putchar(lastDigit + 48);
	return (lastDigit);
}
