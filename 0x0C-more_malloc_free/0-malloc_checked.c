#include "main.h"
/**
 * *malloc_checked - owidshfj oasndijc sndivjniuedc
 * @b: lekdf oijdsofivnfdsnv
 * Return: m
*/
void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		exit(1);
	return (m);
}
