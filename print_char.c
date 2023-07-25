#include "main.h"

/**
 *print_char- prints character format
 *@character: character to be printed
 *Return: returns number of characters printed
 */
int print_char(char character)
{
	int printed_chars = 0;

	_putchar(character);
	printed_chars = printed_chars + 1;

	return (printed_chars);
}
