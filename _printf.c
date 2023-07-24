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
				printed_chars += _putchar(va_arg(argument, int));
			}
			else if (*format == 's')
			{
				char *x = va_arg(arguments, char *);

				while (*x != '\0')
				{
					printed_chars += _putchar(*x++);
				}
			}
			else
			{
				printed_chars += _putchar('n');
			}
		}
		else
		{
			printed_chars += _putchar(*format);
		}
		format++;
	}
	va_end(argument);
	return (printed_chars);
}
