Our printf () function

Authors

Musa Ibrahim

Saida Abdullahi

Description

The format string is a character string, is composed of zero or more directives

Usage

like the according main.h library version:
int _printf(const char *format, ...);

Format Specifiers

A format specifier follows this prototype: %type The following format specifiers are supported:

Supported Types

Type * Output |--------|--------| | d or i | Signed decimal integer | | u | Unsigned decimal integer | | b | Unsigned binary | | o | Unsigned octal | | x | Unsigned hexadecimal integer (lowercase) | | X | Unsigned hexadecimal integer (uppercase) | | c | Single character | | s | String of characters | | p | Pointer address | | % | A % followed by another % character will write a single % |

Value Return

Upon successful return, all functions return the number of characters written, excluding the terminating null character used to end the string. If any error is encountered, -1 is returned.

Examples

#include "main.h"



int main()

{

	_printf("Hello world, I'm a %s", "Bello");

	return (0);

}

Hello world, I'm a Bello

#include "main.h"



int main()

{

	_printf("%S\n", "Best\nSchool!");

	return (0);

}

Best\x0ASchool!

int _printf(const char *restrict format, ...);
