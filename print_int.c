#include <stdio.h>
#include <unistd.h>
#include "main.h"

int print_int(int number)
{
	int printed_chars = 0;
	if (number == 0)
	{
		_putchar('0');
	}
	char buffer[30];
	int i = 0;
	int negative_num = 0;
	if (number < 0)
	{
		negative_num = 1;
		number = -number;
	}

	while (number != 0)
	{
		buffer[i++] = number % 10 + '0';
		number /= 10;
	}

	if (negative_num)
	{
		_putchar('-');
	}

	while (--i >= 0)
	{
		_putchar(buffer[i]);
		printed_chars++;
	}
	return (printed_chars);
}
