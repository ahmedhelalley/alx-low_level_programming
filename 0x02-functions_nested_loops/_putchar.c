#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes character C to stdout
 * 
 * C is the character to be printed
 *
 * Return: 1 - in success
 *         -1 on error
 * */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
