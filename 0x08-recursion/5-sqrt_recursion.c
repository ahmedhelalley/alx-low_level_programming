#include "main.h"
int _sqrt(int n, int val);
/**
 * _sqrt_recursion - skfdj sfkj oesjfdijv oijdsf
 * @n: erijdf ejsfdg oiejfsdcv
 * Return: lkjdf sjv sijfcv
*/
int _sqrt_recursion(int n)
{
	_sqrt(n, 1);
}
/**
 * _sqrt - lkdsf js slkjv iosjfcv
 * @n: fdsj pjsf jsefvj podjfsvc
 * @val: lkjdfs oj jdsfv
 * Return: lkjfds js jdfsvcij
*/
int _sqrt(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (_sqrt(n, val + 1));
	else
		return (-1);
}
