#include <stdio.h>
#include <unistd.h>
#include "main.h"

int print_str(const char *string)
{
	if (string == NULL)
	{
		return (-1);
	}

	int printed_chars = 0;
	while(*string != '\0')
	{
		test_string = *string;

		if(test_tring == '\n')
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

