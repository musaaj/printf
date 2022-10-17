#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 */
int _printf(const char *s, ...)
{
	int i = 0, j = 0;
	char c;
	char *str;
	va_list args;

	va_start(args, s);
	while (s[i] != EOF)
	{
		if (s[i] == '%')
		{
			i++;
			if (s[i] == 'c')
			{
				i++;
				c = (char) va_arg(args, int);
				write(1, &c, 1);
			}
			if (s[i] == 's')
			{
				i++;
				str = va_arg(args, char*);
				while (str[j] != EOF)
				{
					write(1, &str[j], 1);
					j++;
				}
				j = 0;
			}

			if (s[i] == '%')
			{
				write(1, &s[i], 1);
				i++;
			}
		}
		write(1, &s[i], 1);
		i++;
	}
	va_end(args);
	return (i);
}
