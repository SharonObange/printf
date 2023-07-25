#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 *print_str - prints a string of characters
 *@string: the character string to be printed
 *Return: the number of characters printed
 */
int print_str(const char *string)
{
	int printed_chars = 0;
	char test_string;

	if (string == NULL)
	{
		return (-1);
	}


	while (*string != '\0')
	{
		test_string = *string;

		if (test_string == '\n')
		{
			_putchar('\\');
			_putchar('n');
			printed_chars += 2;
		}
		else
		{
			_putchar(test_string);
			printed_chars++;
		}

		string++;
	}

	return (printed_chars);
}

