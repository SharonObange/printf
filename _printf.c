#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

/**
 * _printf - prints a character and string and handles %
 * @format: pointer to format specifier
 * @...: the variable number of variables
 * Return: the no of characters printed
 */

int _printf(const char *format, ...)
{
	va_list argument;
	int printed_chars = 0;

	va_start(argument, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				int characters = va_arg(argument, int);

				_putchar(characters);
				printed_chars = printed_chars + 1;
			}
			else if (*format == 's')
			{
				char *characters = va_arg(argument, char *);

				for (int x = 0; characters[x] != '\0'; x++)				{
				{
					_putchar(characters[x]);
					printed_chars = printed_chars + 1;
				}
			}
			}
			else
			{
				_putchar(*format);
				printed_chars = printed_chars + 1;
			}
		}
		else
		{
			_putchar(*format);
			printed_chars = printed_chars + 1;
		}
		format++;
	}
	va_end(argument);
	return (printed_chars);
}
