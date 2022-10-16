#include <stdarg.h>
#include "main.h"
/**
 * _printf - print formated string to stdin
 * @s: sting format specifier
 * Return: int number of chars printed
 */
int _printf(const char *s, ...)
{
	int i = 0, printed = 0;
	char c, *str;
	va_list args;

	if (s == NULL)
		return (-1);
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
				_putchar(c);
			}
			if (s[i] == 's')
			{
				i++;
				str = va_arg(args, char*);
				printed += _puts(str);
			}
			if (s[i] == '%')
			{
				_putchar(s[i]);
				i++;
			}
		}
		_putchar(s[i]);
		i++;
	}
	va_end(args);
	return (i);
}
