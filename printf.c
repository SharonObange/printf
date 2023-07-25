#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

/**
 *_printf - prints out characters according to format
 *@format: character string
 *@...: unlimited number of arguments
 *Return: nuber of characters printed
 */
int _printf(const char *format, ...)
{
	va_list argument;
	int printed_chars = 0;
	int character, integer;
	char *string;
	float decimal;

	va_start(argument, format);
	character = va_arg(argument, int);
	string = va_arg(argument, char *);
	decimal = va_arg(argument, double);
	integer = va_arg(argument, int);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'd')
			{
				print_int(integer);
			}
			else if (*format == 's')
			{
				print_str(string);
			}
			else if (*format == 'f')
			{
				print_float(decimal);
			}
			else if (*format == 'c')
			{
				print_char(character);
			}
		}
		format++;
	}

	va_end(argument);
	return (printed_chars);
}
