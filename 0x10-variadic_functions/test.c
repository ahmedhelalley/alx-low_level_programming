#include <stdio.h>
int main()
{
	int n = 98;
int *p = &n;

*p++;
printf("%d", n);
return (0);
}
