#include <stdio.h>
#include <inttypes.h>
/**
 * main - ongoinv jdfknnfd djfnvnd
 * Return: 0 on success
*/

int main(void)
{
uint64_t n = 612852475143;
uint64_t largest_prime = 2;

while (n > largest_prime)
{
if (n % largest_prime == 0)
{
n /= largest_prime;
}
else
{
largest_prime++;
}
}
printf("%" PRIu64 "\n", largest_prime);
return (0);
}

