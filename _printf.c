#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

int _printf(const char *format, ...)
{
	 va_list argument;
        int printed_chars = 0;

        va_start(argument, format);
	int character = va_arg(argument, int);
	char *string = va_arg(argument, char *);
	float decimal = va_arg(argument, double);
	int integer = va_arg(argument, int);
	int hexa = va_arg(argument, int);
	while (*format != '\0')
        {
                if (*format == '%')
                {
			*format++;
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
		*format++;
	}

	va_end(argument);
return (printed_chars);
}
