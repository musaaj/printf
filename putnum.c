#include "main.h"
/**
 * _puts - print string to stdin
 * @str: string
 * Return: int number of chars printed
 */
int putnum(char *str)
{
	int printed = 0;

	while (*str != EOF)
	{
		if (*str != '+')
		{
			_putchar(*str);
			str++;
			printed++;
		}
		else
			str++;
	}
	return (printed);
}
