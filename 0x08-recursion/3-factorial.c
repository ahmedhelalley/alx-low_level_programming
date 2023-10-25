#include "main.h"
/**
 * factorial - find the factorial of a number
 * @n: number that we want to find factorial of
 * Return: factorial value
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1 || n == 0)
		return (1);
	else
		return (n * factorial(n - 1));

}
