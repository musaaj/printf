#include "main.h"

int numlen(long int n)
{
	int len = 0;

	if (n < 0)
		n *= -1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}
