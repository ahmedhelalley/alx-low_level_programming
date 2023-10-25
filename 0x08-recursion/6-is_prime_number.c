#include "main.h"
int check_prime(int n, int other);
/**
 * is_prime_number - ohfs hs hsvh ishvi diusfhvci
 * @n: ohdf ohsv hds
 * Return: check_prime value
*/
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
/**
 * check_prime - idhs uhsd hs ishvihdihvihs
 * @n: kjd ocv oijdvc osvcsf
 * @other: led ivc shcvjkndjkcv scvhsj
 * Return: 1 if prime or 0 if no
*/
int check_prime(int n, int other)
{
	if (other >= n && n > 1)
		return (1);
	else if (n % other == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, other + 1));
}
