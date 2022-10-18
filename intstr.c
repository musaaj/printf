#include "main.h"
#include <stdlib.h>
/**
 */
char *intstr(long int n)
{
	int len = numlen(n) + 1;
	char *s = malloc(len);
	int c;

	s[len] = EOF;
	len--;
	if (n < 0)
	{
		s[0] = '-';
		n *= -1;
	}
	else
		s[0] = '+';
	while (n != 0)
	{
		c = n % 10;
		s[len] = c + 48;
		n /= 10;
		len--;
	}
	return (s);
}
