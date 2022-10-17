#include "main.h"
/**
 * _puts - print string to stdin
 * @str: string
 * Return: int number of chars printed
 */
int _puts(char *str)
{
	int printed = 0;

	while (*str != EOF)
	{
		_putchar(*str);
		str++;
		printed++;
	}
	return (printed);
}
