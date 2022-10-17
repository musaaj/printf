#include <stdarg.h>
#include "main.h"
/**
 * _printf - print formated string to stdin
 * @s: sting format specifier
 * Return: int number of chars printed
 */
int _printf(const char *format, ...)
{
	int i = 0, printed = 0;
	char c, *str;
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (format[i] != EOF)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				i++;
				c = (char) va_arg(args, int);
				_putchar(c);
				printed++;
			}
			if (format[i] == 's')
			{
				i++;
				str = va_arg(args, char*);
				printed += _puts(str);
			}
		}
		_putchar(format[i]);
		i++;
		printed++;
	}
	va_end(args);
	return (printed);
}
