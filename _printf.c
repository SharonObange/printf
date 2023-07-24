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
				int x = va_arg(argument, int);

				_putchar(x);
				printed_chars = printed_chars + 1;
			}
			else if (*format == 's')
			{
				char *x = va_arg(argument, char *);

				while (*x != '\0')
				{

					_putchar(*x++);
					printed_chars = printed_chars + 1;
				}
			}
			else
			{
				_putchar('n');
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
