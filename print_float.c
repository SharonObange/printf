#include "main.h"

/**
 *print_float - prints a decimal number
 *@number: number to be printed
 *Return: number of digits printed
 */

float print_float(float number)
{
	int int_part = (int)number;
	float decimal = number - int_part;
	int printed_chars = 0;
	int no_of_decimals = 5;
	int i = 0;
	int digit;

	print_int(int_part);
	_putchar('.');

	for (i = 0; i < no_of_decimals; i++)
	{
		decimal *= 10;
		digit = (int)decimal;

		_putchar(digit + '0');
		decimal -= digit;

		printed_chars = printed_chars + 1;
	}
	_putchar('\n');
	return (printed_chars);
}
